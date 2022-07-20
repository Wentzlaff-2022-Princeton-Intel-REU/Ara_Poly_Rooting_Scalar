/*--------------------------------------------------------------------*/
/* derivative.c                                                       */
/*--------------------------------------------------------------------*/

#include "derivative.h"
#include "printf.h"

/*--------------------------------------------------------------------*/

void derivative(Polynomial_t myPoly, Polynomial_t* differentiatedPoly) {
    differentiatedPoly->degree = myPoly.degree - 1;

    for (int counter = myPoly.degree; counter > 0; counter--){
        differentiatedPoly->coefficients[counter - 1] = myPoly.coefficients[counter] * counter;
    }
}
