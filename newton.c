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
    // intialize roots to max double
    for (int i = 0; i < n; i++) {
        roots[i] = DBL_MAX;
    }

    /* guess is intialized to some random integer in range [-5, 5]
    guess = (rand() % (upper - lower + 1)) + lower
    where upper and lower equal 5 and -5, respectively */
    double guess = (rand() % 11) - 5;
    double oldGuess = 0;
    double diff = guess;
    double oldDiff = 0;

    Polynomial_t polyDeriv;
    double a_n[poly.degree + 1];
    polyDeriv.coefficients = a_n;
    derivative(poly, &polyDeriv);
    
    for (int i = 0; i < n; i++) {
        bool firstLoop = true;
        do {
            oldGuess = guess;
            guess -= horner(poly, guess) / horner(polyDeriv, guess);
            oldDiff = diff;
            diff = fabs(guess - oldGuess);

            // if there are no more roots, exit early
            if (poly.degree % 2 == 0 && !firstLoop && diff > oldDiff && fabs(diff - oldDiff) > 1) {
                qsort(roots, n, sizeof(double), compare);
                return;
            }

            firstLoop = false;
        } while (diff > convCrit || oldDiff > convCrit);

        if (!isfinite(guess)) {
            guess = (rand() % 11) - 5;
        }
        else {
            /* save the found root (guess) and divide out the root
            (longDiv) to reduce the polynomial and its derivative */
            roots[rootIndex] = guess;
            poly = longDiv(poly, guess, convCrit);
            polyDeriv = derivative(poly);
            rootIndex++;
        }
    }
    qsort(roots, n, sizeof(double), compare);
}