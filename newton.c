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

void newton(Polynomial_t poly, double* roots, double convCrit) {
    int n = poly.degree;

    for (int i = 0; i < n; i++) {
        roots[i] = DBL_MAX;
    }

    double xGuess = (double) rand()/ (double) rand();
    double oldXGuess = 0;
    double diff = xGuess;
    double oldDiff = 0;

    Polynomial_t polyDeriv;
    double a_n [poly.degree + 1];
    polyDeriv.coefficients = a_n;
    derivative(poly, &polyDeriv);
    
    for (int i = 0; i < n; i++) {
        bool firstLoop = true;
            do {
                oldXGuess = xGuess;
                xGuess -= horner(poly, xGuess) / horner(polyDeriv, xGuess);
                oldDiff = diff;
                diff = fabs(xGuess - oldXGuess);

                if (!firstLoop && diff > oldDiff && fabs(diff - oldDiff) > 1) {
                    qsort(roots, n, sizeof(double), compare);
                    return;
                }

                firstLoop = false;
            } while (diff > convCrit);
            roots[i] = xGuess;

            longDiv(&poly, a_n, xGuess);
            derivative(poly, &polyDeriv);
    }
    qsort(roots, n, sizeof(double), compare);
}