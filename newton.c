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

void newton(Polynomial_t poly, double* roots, double convCrit) {
    int n = poly.degree;

    printf("test 1.0\n");
    for (int i = 0; i < n; i++) {
      roots[i] = DBL_MAX;
    }

    printf("test 1.1\n");
    double xGuess = (double) rand()/ (double) rand();
    double oldXGuess = 0;
    double diff = xGuess;
    double oldDiff = 0;

    printf("test 1.2\n");
    Polynomial_t newPoly = poly;
    Polynomial_t polyDeriv;
    double arr[poly.degree];
    polyDeriv.coefficients = arr;

    derivative(poly, &polyDeriv);
    
    printf("test 1.3\n");
    for (int i = 0; i < n; i++) {
      bool firstLoop = true;
        do { 
          printf("test 1.4\n");
          oldXGuess = xGuess;
          xGuess -= horner(newPoly, xGuess) / horner(polyDeriv, xGuess);
          printf("test 1.5\n");
          oldDiff = diff;
          diff = fabs(xGuess - oldXGuess);
          printf("test 1.6\n");
         // printf("guess: %lf, oldGuess: %lf, oldDiff: %lf, diff: %lf\n", xGuess, oldXGuess, oldDiff, diff);

          if (!firstLoop && diff > oldDiff && fabs(diff - oldDiff) > 1) {
            return;
          }
          printf("test 1.7\n");

          firstLoop = false;
        } while (diff > convCrit);
        printf("test 1.8\n");
        roots[i] = xGuess;
        printf("test 1.9\n");

        newPoly = longDiv(newPoly, xGuess, convCrit);
        derivative(newPoly, &polyDeriv);
    }

    qsort(roots, n, sizeof(double), compare);
}