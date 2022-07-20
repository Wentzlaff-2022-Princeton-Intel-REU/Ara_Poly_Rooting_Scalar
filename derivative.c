/*--------------------------------------------------------------------*/
/* derivative.c                                                       */
/*--------------------------------------------------------------------*/

#include "derivative.h"
#include "printf.h"

/*--------------------------------------------------------------------*/

void derivative(Polynomial_t myPoly, Polynomial_t* differentiatedPoly) {
    for (int i = myPoly.degree; i > 0; i--){
        differentiatedPoly->coefficients[i - 1] = myPoly.coefficients[i] * i;
    }
 
    differentiatedPoly.degree = myPoly.degree - 1;
}
