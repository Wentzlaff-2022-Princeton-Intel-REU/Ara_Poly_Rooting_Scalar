/*--------------------------------------------------------------------*/
/* derivative.c                                                       */
/*--------------------------------------------------------------------*/

#include "derivative.h"
#include "printf.h"

/*--------------------------------------------------------------------*/

Polynomial_t derivative(Polynomial_t myPoly) {
    double a_n [myPoly.degree];

    for (int i = myPoly.degree; i > 0; i--){
        a_n[i - 1] = myPoly.coefficients[i] * i;
    }

    Polynomial_t differentiatedPoly;
    differentiatedPoly.coefficients = a_n;   
    differentiatedPoly.degree = myPoly.degree - 1;

    return differentiatedPoly;
}
