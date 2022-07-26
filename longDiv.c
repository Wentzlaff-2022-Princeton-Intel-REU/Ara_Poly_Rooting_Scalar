/*--------------------------------------------------------------------*/
/* longDiv.c                                                          */
/*--------------------------------------------------------------------*/

#include <math.h>
#include "longDiv.h"

/*--------------------------------------------------------------------*/

void longDiv(Polynomial_t* poly, double* a_n, double root, double diff) {
    a_n[poly->degree - 1] = poly->coefficients[poly->degree];
    for (int i = poly->degree - 1; i > 0; i--) {
        a_n[i - 1] = poly->coefficients[i] + root * a_n[i];
    }

    if (!isfinite(root) || fabs(poly->coefficients[0] + root * a_n[0]) > diff) {
        return;
    }

    poly->degree -= 1;
    for (int i = poly->degree; i >= 0; i--) {
        poly->coefficients[i] = a_n[i];
    }
}