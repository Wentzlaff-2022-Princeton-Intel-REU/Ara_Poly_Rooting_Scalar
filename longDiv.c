/*--------------------------------------------------------------------*/
/* longDiv.c                                                          */
/*--------------------------------------------------------------------*/

#include <math.h>
// #include <stdio.h>
#include <stdlib.h>
#include "longDiv.h"
#include "printf.h"
#include "printPoly.h"

/*--------------------------------------------------------------------*/

void longDiv(Polynomial_t* poly, double* a_n, double root, double diff) {
    // int n = poly->degree - 1;
    printf("Inside longDiv\n");
    printPoly(*poly);
    for (int i = poly->degree; i >= 0; i--) {
        printf("a_n[i] = %.3f, ", a_n[i]);
        // poly->coefficients[i] = a_n[i];
    }

    a_n[poly->degree - 1] = poly->coefficients[poly->degree];
    for (int i = poly->degree - 1; i > 0; i--) {
        a_n[i - 1] = poly->coefficients[i] + root * a_n[i];
    }

    printf("\nroot: %.16lf, diff: %.16lf, crit: %.16lf\n", root, (poly->coefficients[0] + (root * a_n[0])), diff);
    // if (fabs(poly->coefficients[0] + (root * a_n[0])) > diff) {
    //     return;
    // }

    poly->degree -= 1;
    poly->coefficients = a_n;
    for (int i = poly->degree; i >= 0; i--) {
        printf("a_n[i] = %.3f, ", a_n[i]);
        // poly->coefficients[i] = a_n[i];
    }
    printf("\nRoot: %.3f\n", root);
    printPoly(*poly);
    // for (int i = n; i >= 0; i--) {
    //     printf("i = %d, a_n[i] = %x\n", i, poly->coefficients[i]);
    // }

    // Polynomial_t quotient;
    // quotient.degree = n;
    // quotient.coefficients = a_n;

    // poly = quotient;
}