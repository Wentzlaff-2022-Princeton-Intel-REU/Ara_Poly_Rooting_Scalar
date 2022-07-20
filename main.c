/*--------------------------------------------------------------------*/
/* main.c                                                             */
/*--------------------------------------------------------------------*/

#include <float.h>
#include "newton.h"
#include "printf.h"
#include "reading.h"

/*--------------------------------------------------------------------*/

int main(int argc, char *argv[]) {
    double crit_conversion = 1e-14;
    
    Polynomial_t poly;

    poly.degree = 2;
    double arr[3] = {1, -3, 2};
    poly.coefficients = arr;


    double roots [n];
    newton(poly, &roots, crit_conversion);

    if (roots[0] == DBL_MAX) {
        printf("Your polynomial has no roots.\n");
    }
    else {
        for (int i = 0; i < poly.degree; i++) {
            if (roots[i] == DBL_MAX) {
                break;
            }
            printf("The root approximation is: %.14lg \n", roots[i]);
        }
    }
    
    // for (int i = 0; i <= polyd.degree; i++) {
    //     printf("%lf \n", polyd.coefficients[i]);
    // }

    return 0;
}