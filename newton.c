/*--------------------------------------------------------------------*/
/* newton.c                                                           */
/*--------------------------------------------------------------------*/

#include <float.h>
#include <math.h>
#include <stdbool.h>
// #include <stdio.h>
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

void newton(Polynomial_t poly, double* roots, double convCrit) {
    int n = poly.degree;

    for (int i = 0; i < n; i++) {
        roots[i] = DBL_MAX;
    }

    double xGuess = (double) rand()/ (double) rand();
    double oldXGuess = 0;
    double diff = xGuess;
    double oldDiff = 0;

    double a_n [poly.degree + 1];

    Polynomial_t polyDeriv;
    double arr[poly.degree + 1];
    polyDeriv.coefficients = arr;
    derivative(poly, &polyDeriv);
    
    for (int i = 0; i < n; i++) {
        printf("Degree: %d\n", poly.degree);
        bool firstLoop = true;
            do {
                oldXGuess = xGuess;
                xGuess -= horner(poly, xGuess) / horner(polyDeriv, xGuess);
                oldDiff = diff;
                diff = fabs(xGuess - oldXGuess);

                // printf("guess: %.3f, oldGuess: %.3f, oldDiff: %.3f, diff: %.3f\n", xGuess, oldXGuess, oldDiff, diff);

                if (!firstLoop && diff > oldDiff && fabs(diff - oldDiff) > 1) {
                    printf("exited too soon!\n");
                    printf("Diff of diffs: %.3f\n", (fabs(diff - oldDiff)));
                    qsort(roots, n, sizeof(double), compare);
                    return;
                }

                firstLoop = false;
            } while (diff > convCrit);
            roots[i] = xGuess;

            longDiv(&poly, arr, xGuess, convCrit);
            derivative(poly, &polyDeriv);
    }
    qsort(roots, n, sizeof(double), compare);

    // return roots;
}