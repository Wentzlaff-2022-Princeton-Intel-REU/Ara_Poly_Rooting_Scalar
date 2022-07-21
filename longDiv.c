/*--------------------------------------------------------------------*/
/* longDiv.c                                                          */
/*--------------------------------------------------------------------*/

#include <math.h>
#include "longDiv.h"
#include "printf.h"
#include "printPoly.h"

/*--------------------------------------------------------------------*/

void longDiv(Polynomial_t* poly, double* a_n, double root, double diff) {
    int n = poly->degree - 1;

    a_n[n] = poly->coefficients[n + 1];
    for (int i = n; i > 0; i--) {
        a_n[i - 1] = poly->coefficients[i] + root * a_n[i];
    }

    printf("root: %.16lf, diff: %.16lf\n", root, (poly->coefficients[0] + root * a_n[0]));
    if (fabs(poly->coefficients[0] + root * a_n[0]) > diff) {
        return;
    }

    poly->degree = n;
    poly->coefficients = a_n;
    // for (int i = 0; i <= n; i++) {
    //     poly->coefficients[i] = a_n[i];
    // }
    printf("Root: %.3f\n", root);
    printPoly(*poly);
    // for (int i = n; i >= 0; i--) {
    //     printf("i = %d, a_n[i] = %x\n", i, poly->coefficients[i]);
    // }

    // Polynomial_t quotient;
    // quotient.degree = n;
    // quotient.coefficients = a_n;

    // poly = quotient;
}