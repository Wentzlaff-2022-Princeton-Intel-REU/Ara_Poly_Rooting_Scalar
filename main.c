/*--------------------------------------------------------------------*/
/* main.c                                                             */
/*--------------------------------------------------------------------*/

#include <float.h>
#include "newton.h"
#include "printf.h"
#include "reading.h"
#include "runtime.h"

/*--------------------------------------------------------------------*/

int main() {
    double crit_conversion = 1e-14;

    Polynomial_t poly;
    poly.degree = 4;
    double arr[5] = {24, 14, -13, -2, 1}};
    poly.coefficients = arr;

    printf("Polynomial:\n");
    for (int i = poly.degree; i > 0; i--) {
        printf("%.1f * x^%d + ", poly.coefficients[i], i);
    }
    printf("%.1f\n\n", poly.coefficients[0]);

    double roots [poly.degree];
    start_timer();
    newton(poly, &roots, crit_conversion);
    stop_timer();
    int64_t cycle_time = get_timer();

    if (roots[0] == DBL_MAX) {
        printf("Your polynomial has no roots.\n");
    }
    else {
        for (int i = 0; i < poly.degree; i++) {
            if (roots[i] == DBL_MAX) {
                break;
            }
            printf("The root approximation is: %.3f \n", roots[i]);
        }
    }

    printf("\nRuntime (cycles): %d\n", cycle_time);
    
    return 0;
}
