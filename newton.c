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
    printf("%d\n", n);

    for (int i = 0; i < n; i++) {
      roots[i] = DBL_MAX;
    }

    double xGuess = (double) rand()/ (double) rand();
    double oldXGuess = 0;
    double diff = xGuess;
    double oldDiff = 0;

    Polynomial_t newPoly = poly;
    Polynomial_t polyDeriv = derivative(poly);
    
    for (int i = 0; i < n; i++) {
      bool firstLoop = true;
        do {
          oldXGuess = xGuess;
          xGuess -= horner(newPoly, xGuess) / horner(polyDeriv, xGuess);
          oldDiff = diff;
          diff = fabs(xGuess - oldXGuess);;
         // printf("guess: %lf, oldGuess: %lf, oldDiff: %lf, diff: %lf\n", xGuess, oldXGuess, oldDiff, diff);

          if (!firstLoop && diff > oldDiff && fabs(diff - oldDiff) > 1) {
            printf("exited too soon!\n");
            return;
          }

          firstLoop = false;
        } while (diff > convCrit);
        roots[i] = xGuess;

        newPoly = longDiv(newPoly, xGuess, convCrit);
        polyDeriv = derivative(newPoly);
    }

    qsort(roots, n, sizeof(double), compare);
}