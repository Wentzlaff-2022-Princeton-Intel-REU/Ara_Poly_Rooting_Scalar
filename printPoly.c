/*--------------------------------------------------------------------*/
/* newton.c                                                           */
/*--------------------------------------------------------------------*/

#include "printf.h"
// #include <stdio.h>
#include "printPoly.h"

/*--------------------------------------------------------------------*/

void printPoly(Polynomial_t poly) {
    // printf("Degreee: %d\n", poly.degree);
    for (int i = poly.degree; i > 0; i--) {
        printf("%.16f * x^%d + ", poly.coefficients[i], i);
    }
    printf("%.16f\n\n", poly.coefficients[0]);
}