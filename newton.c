/*--------------------------------------------------------------------*/
/* newton.c                                                           */
/*--------------------------------------------------------------------*/

#include <float.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include "derivative.h"
#include "horner.h"
#include "longDiv.h"
#include "newton.h"
#include "printf.h"
#include "printPoly.h"

/*--------------------------------------------------------------------*/

// the compare function for double values
static int compare(const void * a, const void * b) {
  if (*(double*)a > *(double*)b)
    return 1;
  else if (*(double*)a < *(double*)b)
    return -1;
  else
    return 0;  
}

double* newton(Polynomial_t poly, double convCrit) {
    int n = poly.degree;
    double roots[n];

    for (int i = 0; i < n; i++) {
      roots[i] = DBL_MAX;
    }

    double xGuess = (double) rand()/ (double) rand();
    double oldXGuess = 0;
    double diff = xGuess;
    double oldDiff = 0;

    // Polynomial_t newPoly = poly;
    // printf("New Polynomial:\n");
    // printf("%d\n", newPoly.degree);
    // for (int i = newPoly.degree; i > 0; i--) {
    //     printf("%.1f * x^%d + ", newPoly.coefficients[i], i);
    // }
    // printf("%.1f\n\n", newPoly.coefficients[0]);

    Polynomial_t polyDeriv;
    double arr[poly.degree];
    polyDeriv.coefficients = arr;
    derivative(poly, &polyDeriv);
    
    for (int i = 0; i < n; i++) {
      bool firstLoop = true;
        do {
          oldXGuess = xGuess;
          xGuess -= horner(poly, xGuess) / horner(polyDeriv, xGuess);
          oldDiff = diff;
          diff = fabs(xGuess - oldXGuess);

          // printf("guess: %.3f, oldGuess: %.3f, oldDiff: %.3f, diff: %.3f\n", xGuess, oldXGuess, oldDiff, diff);

          if (!firstLoop && diff > oldDiff && fabs(diff - oldDiff) > 1) {
            printf("exited too soon!\n");
            qsort(roots, i, sizeof(double), compare);
            return roots;
          }

          firstLoop = false;
        } while (diff > convCrit);
        roots[i] = xGuess;

        double a_n [poly.degree];
        printf("guess: %.3f, oldGuess: %.3f, oldDiff: %.3f, diff: %.3f\n", xGuess, oldXGuess, oldDiff, diff);
        longDiv(&poly, &a_n, xGuess, convCrit);
        printf("New Polynomial:\n");
        printf("%d\n", poly.degree);
        printPoly(poly);
        // for (int i = poly.degree; i > 0; i--) {
        //     printf("%.3f * x^%d + ", poly.coefficients[i], i);
        // }
        // printf("%.1f\n\n", poly.coefficients[0]);

        derivative(poly, &polyDeriv);
        // printf("Deriv Polynomial:\n");
        // printf("%d\n", polyDeriv.degree);
        // for (int i = polyDeriv.degree; i > 0; i--) {
        //     printf("%.1f * x^%d + ", polyDeriv.coefficients[i], i);
        // }
        // printf("%.1f\n\n", polyDeriv.coefficients[0]);
    }
    qsort(roots, n, sizeof(double), compare);

    return roots;
}