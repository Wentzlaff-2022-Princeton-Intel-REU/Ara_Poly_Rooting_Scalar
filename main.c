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
    double arr[] = {-1,-0,1};
    poly.coefficients = arr;

    for (int i = 2; i < 30; i++){
        
        // if (i == 2) {
        //     poly.degree = 2;
        //     double inForArr[] = {-1,-0,1};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        // }
        

        // else if (i == 3) {
        //     poly.degree = 3;
        //     double inForArr[] = {-5, -25, -44, -26};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        // }

        // else if (i == 4) {
        //     poly.degree = 4;
        //     double inForArr[] = {3, 25, 77, 91, 28};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        // }

        // else if (i == 5) {
        //     poly.degree = 5;
        //     double inForArr[] = {-2, 13, -41, 61, -44, 12};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        // }

        // else if (i == 6) {
        //     poly.degree = 6;
        //     double inForArr[] = {-2, -13, 22, 208, 40, -759, -459};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        // }

        // else if (i == 7) {
        //     poly.degree = 7;
        //     double inForArr[] = {-5, 34, -18, -468, 1570, -1976, 971, -153};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        // }
        // else if (i == 8) {
        //     poly.degree = 8;
        //     double inForArr[] = {3, -25, 3, 363, -213, -1929, 280, 3724, 1646};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        // }
        // else if (i == 9) {
        //     poly.degree = 9;
        //     double inForArr[] = {2, -9, -35, 194, 32, -805, 447, 478, -247, -64};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        // }
        // else if (i == 10) {
        //     poly.degree = 10;
        //     double inForArr[] = {2, -9, -35, 194, 32, -805, 447, 478, -247, -64};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        // }

        else if (i == 11) {
            poly.degree = 11;
            double inForArr[] = {2, -5, -37, 97, 331, -565, -1417, 1087, 2758, -286, -1904, -579};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 11 th degree Runtime (cycles): %d\n", cycleTime);
        }

        else if (i == 12) {
            poly.degree = 12;
            double inForArr[] = {-3, 51, -158, -1041, 6494, 3105, -76674, 53994, 403147, -389315, -1059868, 723618, 1261278};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 12 th degree Runtime (cycles): %d\n", cycleTime);
        }
        else if (i == 13) {
            poly.degree = 13;
            double inForArr[] = {2, -48, 438, -1186, -7856, 70472, -160526, -359147, 2708490, -4618229, -3982347, 26950562, -40930047, 25184064};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 13 th degree Runtime (cycles): %d\n", cycleTime);
        }

        else if (i == 14) {
            poly.degree = 14;
            double inForArr[] = {2, -48, 438, -1186, -7856, 70472, -160526, -359147, 2708490, -4618229, -3982347, 26950562, -40930047, 25184064, -4058025};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 14 th degree Runtime (cycles): %d\n", cycleTime);
        }

        else if (i == 15) {
            poly.degree = 15;
            double inForArr[] = {-4, -56, -86, 2092, 7958, -29316, -159478, 202696, 1507735, -937214, -7698174, 4746919, 20960860, -19615356, -21432113, 34840900};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 15 th degree Runtime (cycles): %d\n", cycleTime);
        }


        else if (i == 16) {
            poly.degree = 16;
            double inForArr[] = {-4, -56, -86, 2092, 7958, -29316, -159478, 202696, 1507735, -937214, -7698174, 4746919, 20960860, -19615356, -21432113, 34840900, -12398010};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 16 th degree Runtime (cycles): %d\n", cycleTime);
        }

        else if (i == 17) {
            poly.degree = 17;
            double inForArr[] = {3, -3, -189, 161, 5012, -3093, -66552, 24047, 458210, -37014, -1523669, -294347, 2008363, 500932, -860854, -25433, 96112, -3246};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 17 th degree Runtime (cycles): %d\n", cycleTime);
        }

        else if (i == 18) {
            poly.degree = 18;
            double inForArr[] = {3, -3, -189, 161, 5012, -3093, -66552, 24047, 458210, -37014, -1523669, -294347, 2008363, 500932, -860854, -25433, 96112, -900, -3246};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 18 th degree Runtime (cycles): %d\n", cycleTime);
        }

        else if (i == 19) {
            poly.degree = 19;
            double inForArr[] = {1, 10, 23, 69, 92, 137, 337, 372, 383, 441, 443, 510, 555, 673, 700, 732, 738, 906, 946};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 19 th degree Runtime (cycles): %d\n", cycleTime);
        }

        else if (i == 20) {
            poly.degree = 20;
            double inForArr[] = {1, 10, 23, 69, 92, 137, 337, 372, 383, 441, 443, 510, 555, 673, 700, 732, 738, 906, 946, 996};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 20 th degree Runtime (cycles): %d\n", cycleTime);
        }

        else if (i == 21) {
            poly.degree = 30;
            double inForArr[] = {16, 53, 57, 127, 148, 159, 183, 185, 196, 213, 236, 275, 293, 329, 363, 388, 404, 551, 569, 610, 612, 658, 670, 705, 759, 768, 826, 860, 951, 1000};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 30 th degree Runtime (cycles): %d\n", cycleTime);
        }

        else if (i == 22) {
            poly.degree = 40;
            double inForArr[] = {28, 37, 40, 77, 129, 130, 135, 143, 179, 182, 218, 259, 263, 311, 412, 413, 420, 472, 489, 500, 516, 531, 545, 556, 630, 661, 726, 731, 734, 738, 757, 774, 804, 808, 837, 856, 868, 965, 966, 971};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 40 th degree Runtime (cycles): %d\n", cycleTime);
        }

        else if (i == 23) {
            poly.degree = 50;
            double inForArr[] = {4, 16, 28, 42, 49, 66, 78, 103, 151, 161, 189, 228, 274, 313, 326, 332, 357, 368, 374, 386, 420, 455, 473, 500, 507, 511, 530, 539, 596, 609, 652, 653, 659, 676, 684, 690, 696, 701, 742, 749, 790, 811, 820, 826, 910, 916, 964, 968, 972, 988};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 50 th degree Runtime (cycles): %d\n", cycleTime);
        }

        else if (i == 24) {
            poly.degree = 100;
            double inForArr[] = {81, 39, 49, 58, 19, 96, 26, 67, 67, 6, 4, 21, 32, 49, 64, 30, 43, 20, 45, 74, 58, 85, 1, 14, 56, 97, 27, 1, 34, 27, 34, 93, 10, 54, 53, 83, 65, 57, 73, 53, 15, 40, 49, 40, 41, 16, 79, 41, 41, 24, 96, 29, 33, 47, 87, 52, 88, 30, 84, 76, 23, 40, 30, 12, 41, 26, 5, 26, 65, 84, 78, 14, 21, 7, 24, 88, 26, 85, 53, 73, 60, 4, 69, 59, 81, 62, 18, 30, 57, 69, 54, 100, 92, 64, 46, 36, 61, 83, 10, 59};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 100 th degree Runtime (cycles): %d\n", cycleTime);
        }


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
