/*--------------------------------------------------------------------*/
/* main.c                                                             */
/*--------------------------------------------------------------------*/

#include <float.h>
#include "newton.h"
#include "printf.h"
#include "printPoly.h"
#include "runtime.h"

/*--------------------------------------------------------------------*/

int main() {
    Polynomial_t poly;
    poly.degree = 3;
    double arr[] = {3,1,3,1};
    poly.coefficients = arr;

    double roots[poly.degree];
    double convCrit = 1e-14;

    printf("Polynomial:\n");
    printPoly(poly);
    
    start_timer();
    newton(poly, roots, convCrit);
    stop_timer();
    int64_t cycleTime = get_timer();

    if (poly.degree == 0 || roots[0] == DBL_MAX) {
        printf("Your polynomial has no real roots.\n");
    }
    else {
        for (int i = 0; i < poly.degree; i++) {
            if (roots[i] == DBL_MAX) {
                break;
            }
            printf("The root approximation is: %.18f\n", roots[i]);
        }
    }

    printf("\nRuntime (cycles): %d\n", cycleTime);
    
    return 0;
}
