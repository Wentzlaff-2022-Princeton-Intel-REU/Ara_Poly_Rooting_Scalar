/*--------------------------------------------------------------------*/
/* main.c                                                             */
/*--------------------------------------------------------------------*/

#include <float.h>
#include "newton.h"
#include "printf.h"
#include "reading.h"

/*--------------------------------------------------------------------*/

int main() {
    double crit_conversion = 1e-14;
    printf("test 0\n");
    Polynomial_t poly;
    poly.degree = 2;
    double arr[3] = {1, -3, 2};
    poly.coefficients = arr;
    printf("test 1\n");
    printf("Polynomial:\n");
    for (int i = poly.degree; i > 0; i--) {
        printf("%.3f * x^%d + ", poly.coefficients[i], i);
    }
    printf("%.3f\n", poly.coefficients[0]);

    printf("test 2\n");
    double roots [poly.degree];
    printf("test 3\n");
    newton(poly, &roots, crit_conversion);
    printf("test 4\n");
    if (roots[0] == DBL_MAX) {
        printf("Your polynomial has no roots.\n");
    }
    else {
        for (int i = 0; i < poly.degree; i++) {
            printf("test 5\n");
            if (roots[i] == DBL_MAX) {
                printf("test 6\n");
                break;
            }
            printf("The root approximation is: %.3f \n", roots[i]);
            printf("test 7\n");
        }
    }
    printf("test 8\n");
    
    return 0;
}
