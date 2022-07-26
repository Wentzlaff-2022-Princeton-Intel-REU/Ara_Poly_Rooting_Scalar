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

    for (int i = 2; i < 30; i++){
        

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

         if (i == 7) {
            poly.degree = 7;
            double inForArr[] = {54, -36, -73.5,49,21,-14,-1.5,1};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

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

    printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        }
    //     else if (i == 8) {
    //         poly.degree = 8;
    //         double inForArr[] = {64, 419, 662, -165, -293, -28, 31, 9, 1};
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
    //         double inForArr[] = {0, -0, 1, 40, 101, -11, -101, -10, 20, 5};
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
    //         double inForArr[] = {77, 1695, 5429, 5674, 171, -3342, -1984, -226, 126, 40, 3};
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
    //         double inForArr[] = {-32597, 23660, 35206, -21310, -16333, 6641, 4154, -774, -558, 4, 30, 3};
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

    //     else if (i == 12) {
    //         poly.degree = 12;
    //         double inForArr[] = {-23475, 55403, 105379, -89024, -93391, 56414, 23571, -14330, -1131, 1248, -64, -33, 4};
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

    //         printf("\n 12 th degree Runtime (cycles): %d\n", cycleTime);
    //     }
    //     else if (i == 13) {
    //         poly.degree = 13;
    //         double inForArr[] = {-5218, 17669, 20351, -44523, -42548, 25480, 33468, 1597, -8253, -2956, 21, 193, 38, 2};
    //         poly.coefficients = inForArr;
    //         double roots[poly.degree];
    //         double convCrit = 1e-14;

    //         start_timer();
    //         newton(poly, roots, convCrit);
    //         stop_timer();
    //         int64_t cycleTime = get_timer();

    //         printf("\n 13 th degree Runtime (cycles): %d\n", cycleTime);
    //     }

    //     else if (i == 14) {
    //         poly.degree = 14;
    //         double inForArr[] = {-119, 1596, 3672, -4889, -7732, 8580, 4249, -7040, 1137, 1406, -627, 6, 47, -10, 1};
    //         poly.coefficients = inForArr;
    //         double roots[poly.degree];
    //         double convCrit = 1e-14;

    //         start_timer();
    //         newton(poly, roots, convCrit);
    //         stop_timer();
    //         int64_t cycleTime = get_timer();

    //         printf("\n 14 th degree Runtime (cycles): %d\n", cycleTime);
    //     }

    //     else if (i == 15) {
    //         poly.degree = 15;
    //         double inForArr[] = {17477, -190576, 309265, 556101, -567014, -320094, 363468, 35623, -99488, 14171, 10405, -3432, -63, 176, -29, 1};
    //         poly.coefficients = inForArr;
    //         double roots[poly.degree];
    //         double convCrit = 1e-14;

    //         start_timer();
    //         newton(poly, roots, convCrit);
    //         stop_timer();
    //         int64_t cycleTime = get_timer();

    //         printf("\n 15 th degree Runtime (cycles): %d\n", cycleTime);
    //     }


        else if (i == 16) {
            poly.degree = 16;
            double inForArr[] = {-299, 3543, -11819, -4382, 78639, -88521, -13772, 60505, -18506, -10524, 6347, 36, -651, 112, 15, -6, 0};
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
            double inForArr[] = {-14425, 166758, -620467, 858537, 104728, -1455223, 1148975, 309789, -798974, 257662, 122969, -97177, 13093, 5515, -1793, 26, 46, -5};
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
            double inForArr[] = {177, 15071, -14703, -263470, 980786, -1484141, 962279, 151416, -726154, 518204, -128120, -40488, 39539, -11414, 707, 442, -134, 16, -1};
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
            double inForArr[] = {301318511, -206190487, -659728702, 330196873, 499541838, -218146341, -187527653, 76839194, 39666364, -15793143, -4975555, 1961167, 374727, -147793, -16576, 6580, 396, -159, -4, 2};
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
            double inForArr[] = {-171785, 10980964, -62526264, 140105323, -131470049, -1349713, 101719532, -66209146, -5909238, 21519398, -5809916, -1930073, 1144188, -27683, -79361, 12094, 2009, -586, 5, 9, -1};
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
            double inForArr[] = {16, 53, 57, 127, 148, 19, 183, 185, 196, 213, 236, 275, 293, 329, 363, 38248, 404, 551, 569, 610, 612, 658, 670, 705, 759, 72468, 82246, 863230, 932451, 102400};
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
            double inForArr[] = {28, 37, 40, 77, 129, 130, 135, 143, 179, 182, 218, 259, 263, 311, 412, 413, 4204, 472, 489, 500, 516, 531, 545, 556, 630, 661, 726, 731, 734, 738, 757, 774, 804, 808, 837, 856, 868, 965, 96236, 23971};
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
            double inForArr[] = {4, 16, 28, 42, 49, 66, 78, 103, 151, 161, 189, 228, 274, 313, 326, 332, 357, 368, 374, 386, 420, 455, 473, 500, 507, 511, 5430, 539, 596, 609, 652, 653, 659, 676, 684, 690, 696, 701, 742, 749, 790, 811, 820, 826, 910, 916, 964, 923468, 923472, 98823};
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
            double inForArr[] = {81, 39, 49, 58, 19, 96, 26, 67, 67, 6, 4, 21, 32, 49, 64, 30, 43, 20, 45, 74, 58, 85, 1, 14, 56, 97, 27, 1, 34, 27, 34, 93, 10, 54, 53, 83, 65, 57, 73, 53, 15, 40, 49, 40, 41, 16, 79, 41, 41, 24, 96, 29, 33, 47, 87, 52, 88, 30, 84, 76, 23, 40, 30, 12, 41, 26, 5, 26, 65, 84, 78, 14, 21, 7, 24, 88, 26, 85, 53, 73, 60, 4, 69, 59, 81, 62, 18, 30, 57, 69, 54, 100, 92, 64, 46, 36, 61, 8233, 1420, 5923};
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
