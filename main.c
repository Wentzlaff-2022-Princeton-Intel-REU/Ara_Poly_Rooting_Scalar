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
    poly.degree = 2;
    double arr[] = {-1,0,1};
    poly.coefficients = arr;

    for (int i = 2; i < 20; i++){
        
       

        if (i == 3) {
            poly.degree = 3;
            double inForArr[] = {-5, -25, -44, -26};
            poly.coefficients = inForArr;
        }

        else if (i == 4) {
            poly.degree = 4;
            double inForArr[] = {3, 25, 77, 91, 28};
            poly.coefficients = inForArr;
        }

        else if (i == 5) {
            poly.degree = 5;
            double inForArr[] = {-2, 13, -41, 61, -44, 12};
            poly.coefficients = inForArr;
        }

        else if (i == 6) {
            poly.degree = 6;
            double inForArr[] = {-2, -13, 22, 208, 40, -759, -459};
            poly.coefficients = inForArr;
        }

        double roots[poly.degree];
        double convCrit = 1e-14;

        start_timer();
        newton(poly, roots, convCrit);
        stop_timer();
        int64_t cycleTime = get_timer();

        printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);


    }
   
    // double roots[poly.degree];
    // double convCrit = 1e-14;

    // printf("Polynomial:\n");
    // printPoly(poly);
    
    // start_timer();
    // newton(poly, roots, convCrit);
    // stop_timer();
    // int64_t cycleTime = get_timer();

    // printf("\n Runtime (cycles): %d\n", cycleTime);



    // if (poly.degree == 0 || roots[0] == DBL_MAX) {
    //     printf("Your polynomial has no real roots.\n");
    // }
    // else {
    //     for (int i = 0; i < poly.degree; i++) {
    //         if (roots[i] == DBL_MAX) {
    //             break;
    //         }
    //         printf("The root approximation is: %.18f\n", roots[i]);
    //     }
    // }

    // printf("\nRuntime (cycles): %d\n", cycleTime);
    
    return 0;
}
