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
    double arr[] = {-0, 1, -2};
    poly.coefficients = arr;

    for (int i = 20; i < 25; i++){
        

        // if (i == 2) {
        //     poly.degree = 2;
        //     double inForArr[] = {-0, 1, -2};
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
        //     double inForArr[] = {-89, 122, -39, 4};
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
        //     double inForArr[] = {8, -38, 50, -6, -4};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        // }

        //  else if (i == 5) {
        //     poly.degree = 5;
        //     double inForArr[] = {-1, -6, -15, -15, -1, 5};
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
        //     double inForArr[] = {15, 2, -77, -22, 82, 40, 5};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        // }

    //      if (i == 7) {
    //         poly.degree = 7;
    //         double inForArr[] = {54, -36, -73.5,49,21,-14,-1.5,1};
    //         poly.coefficients = inForArr;
    //         double roots[poly.degree];
    //         double convCrit = 1e-14;

    //        printPoly(poly);

    //         start_timer();
    //         newton(poly, roots, convCrit);
    //         stop_timer();
    //         int64_t cycleTime = get_timer();
    //           if (poly.degree == 0 || roots[0] == DBL_MAX) {
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

    // printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
    //     }
    //     else if (i == 8) {
    //         poly.degree = 8;
    //         double inForArr[] = {345, -15, -1959, -2566, -909, 259, 247, 56, 4};
    //         poly.coefficients = inForArr;
    //         double roots[poly.degree];
    //         double convCrit = 1e-14;

    //         start_timer();
    //         newton(poly, roots, convCrit);
    //         stop_timer();
    //         int64_t cycleTime = get_timer();

    //         printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
    //     }
    //     else if (i == 9) {
    //         poly.degree = 9;
    //         double inForArr[] = {10099, 4851, -8282, -1950, 2674, 27, -316, 31, 12, -2};
    //         poly.coefficients = inForArr;
    //         double roots[poly.degree];
    //         double convCrit = 1e-14;

    //         start_timer();
    //         newton(poly, roots, convCrit);
    //         stop_timer();
    //         int64_t cycleTime = get_timer();

    //         printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
    //     }
    //     else if (i == 10) {
    //         poly.degree = 10;
    //         double inForArr[] = {-35473, 69902, 31462, -37810, -11579, 6948, 1910, -506, -133, 13, 3};
    //         poly.coefficients = inForArr;
    //         double roots[poly.degree];
    //         double convCrit = 1e-14;

    //         start_timer();
    //         newton(poly, roots, convCrit);
    //         stop_timer();
    //         int64_t cycleTime = get_timer();

    //         printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
    //     }

    //     else if (i == 11) {
    //         poly.degree = 11;
    //         double inForArr[] = {286, 4497, 24178, 49200, 23675, -16752, -19955, -6468, -232, 313, 68, 4};
    //         poly.coefficients = inForArr;
    //         double roots[poly.degree];
    //         double convCrit = 1e-14;

    //         printPoly(poly);

    //         start_timer();
    //         newton(poly, roots, convCrit);
    //         stop_timer();
    //         int64_t cycleTime = get_timer();

    //         if (poly.degree == 0 || roots[0] == DBL_MAX) {
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

    //         printf("\n 11 th degree Runtime (cycles): %d\n", cycleTime);
    //     }

    //      if (i == 12) {
    //         poly.degree = 12;
    //         double inForArr[] = {-237140, 145816, 234690, -163282, -3, 51130, 3011, -6780, 359, 405, -45, -9, 1};
    //         poly.coefficients = inForArr;
    //         double roots[poly.degree];
    //         double convCrit = 1e-14;

    //         printPoly(poly);

    //         start_timer();
    //         newton(poly, roots, convCrit);
    //         stop_timer();
    //         int64_t cycleTime = get_timer();
    //           if (poly.degree == 0 || roots[0] == DBL_MAX) {
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

        //     printf("\n 12 th degree Runtime (cycles): %d\n", cycleTime);
        // }
        //  if (i == 13) {
        //     poly.degree = 13;
        //     double inForArr[] = {214720, -563827, 169365, 442653, -2, -173647, 39627, 39552, -1546, -4599, -521, 182, 47, 3};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n 13 th degree Runtime (cycles): %d\n", cycleTime);
        // }

        // else if (i == 14) {
        //     poly.degree = 14;
        //     double inForArr[] = {-206, 636, 4103, -973, -17572, -12225, 11283, 9945, -3449, -2933, 672, 357, -74, -14, 3};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n 14 th degree Runtime (cycles): %d\n", cycleTime);
        // }

        // else if (i == 15) {
        //     poly.degree = 15;
        //     double inForArr[] = {1411, 14012, 41173, 29052, -54762, -89893, -17782, 30038, 12619, -2875, -1938, 16, 113, 8, -2, -0};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n 15 th degree Runtime (cycles): %d\n", cycleTime);
        // }


        // else if (i == 16) {
        //     poly.degree = 16;
        //     double inForArr[] = {32683430, -57723542, -24910159, 65687669, -61920, -26932510, 3249930, 5500254, -931502, -620346, 119171, 39113, -7952, -1285, 268, 17, -4};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n 16 th degree Runtime (cycles): %d\n", cycleTime);
        // }

        // else if (i == 17) {
        //     poly.degree = 17;
        //     double inForArr[] = {-2135299, 2713794, 42588565, -133771735, 112270431, 14673944, -66805081, 27806800, 5377120, -7154265, 1581944, 261102, -178881, 24789, 2144, -1034, 118, -5};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n 17 th degree Runtime (cycles): %d\n", cycleTime);
        // }

        // else if (i == 18) {
        //     poly.degree = 18;
        //     double inForArr[] = {6, 213, 2349, 8099, -5801, -39213, 14582, 62571, -34192, -26733, 16359, 5284, -3307, -558, 328, 30, -16, -1, 0};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n 18 th degree Runtime (cycles): %d\n", cycleTime);
        // }

        // else if (i == 19) {
        //     poly.degree = 19;
        //     double inForArr[] = {-9674781, -5223705, 47319532, 25291139, -78584255, -41894765, 55195475, 32714564, -17408084, -12983145, 1966035, 2610161, 121695, -250430, -41475, 9607, 2783, -21, -58, -4};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n 19 th degree Runtime (cycles): %d\n", cycleTime);
        // }

          if (i == 20) {
            poly.degree = 20;
            double inForArr[] = {-39, 475, 6352, -2779, -152185, -281329, 461202, 1700131, 1231220, -711468, -1389196, -471656, 253150, 228651, 39095, -16781, -7853, -646, 226, 54, 4};
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
            double inForArr[] = {16, 53, 57, 127, 148, 19, 183, 185, 196, 2213, 236, 275, 293, 329, 363, 38248, 404, 551, 569, 610, 612, 658, 670, 705, 759, 72468, 82246, 863230, 932451, 102400};
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
            double inForArr[] = {28, 37, 40, 77, 129, 130, 135, 143, 1379, 182, 218, 259, 263, 311, 412, 413, 4204, 472, 489, 500, 516, 531, 545, 556, 630, 661, 726, 731, 734, 738, 757, 774, 804, 808, 837, 856, 868, 965, 96236, 23971};
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
            double inForArr[] = {4, 16, 28, 42, 49, 66, 78, 103, 151, 161, 1829, 228, 274, 313, 326, 332, 357, 368, 374, 386, 420, 455, 473, 500, 507, 511, 5430, 539, 596, 609, 652, 653, 659, 676, 684, 690, 696, 701, 742, 749, 790, 811, 820, 826, 910, 916, 964, 923468, 923472, 98823};
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
            double inForArr[] = {81, 39, 49, 58, 19, 96, 26, 67, 673, 6, 4, 21, 32, 49, 64, 30, 43, 20, 45, 74, 58, 85, 1, 14, 56, 97, 27, 1, 34, 27, 34, 93, 10, 54, 53, 83, 65, 57, 73, 53, 15, 40, 49, 40, 41, 16, 79, 41, 41, 24, 96, 29, 33, 47, 87, 52, 88, 30, 84, 76, 23, 40, 30, 12, 41, 26, 5, 26, 65, 84, 78, 14, 21, 7, 24, 88, 26, 85, 53, 73, 60, 4, 69, 59, 81, 62, 18, 30, 57, 69, 54, 100, 92, 64, 46, 36, 61, 8233, 1420, 5923};
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
