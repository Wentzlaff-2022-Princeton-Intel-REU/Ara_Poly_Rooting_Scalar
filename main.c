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
    double arr[] = {2,-5,3};
    poly.coefficients = arr;

    for (int i = 2; i < 30; i++){
        
        // confirmed works, 2-4.
        // if (i == 2) {
        //     poly.degree = 2;
        //     double inForArr[] = {2, -5, 3};
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
        //     double inForArr[] = {-4, -5, 9, -3};
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
        //     double inForArr[] = {4, 7, -96, -74, 536};
        //     poly.coefficients = inForArr;
        //     double roots[poly.degree];
        //     double convCrit = 1e-14;

        //     start_timer();
        //     newton(poly, roots, convCrit);
        //     stop_timer();
        //     int64_t cycleTime = get_timer();

        //     printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        // }

        else if (i == 5) {
            poly.degree = 5;
            double inForArr[] = {-1, -6, -15, -15, -1, 5};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        }

        else if (i == 6) {
            poly.degree = 6;
            double inForArr[] = {-2, -19, -56, -56, -6, 13, -14};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        }

        else if (i == 7) {
            poly.degree = 7;
            double inForArr[] = {4, -59, 285, -449, -787, 38356, -5024, 2200};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        }
        else if (i == 8) {
            poly.degree = 8;
            double inForArr[] = {4, -53, 170, 295, -2793, 46327, 2431, -13137, 9438};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        }
        else if (i == 9) {
            poly.degree = 9;
            double inForArr[] = {1, 29, 292, 1486, 3765, 2689, -71711, -16436, -8132, -409};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        }
        else if (i == 10) {
            poly.degree = 10;
            double inForArr[] = {1, 4, -10, -73, -87, 74, 1344, -30, -67, 5, 10};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        }

        else if (i == 11) {
            poly.degree = 11;
            double inForArr[] = {2, -5, -37, 97, 331, -565, -14127, 1087, 2758, -286, -1904, -579};
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
            double inForArr[] = {5, -47, -38, 1677, -2186, -221437, 41696, 143438, -270417, -439593, 695432, 473902, -649549};
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
            double inForArr[] = {3, -4, -115, 86, 1450, 42, -72018, -4993, 8591, 7676, -3684, -3506, 454, 375};
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
            double inForArr[] = {3, 33, 20, -756, -18141, 5082, 18247, -6307, -59552, -27416, 43750, 21673, -5705, 81, 21};
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
            double inForArr[] = {3, 38, 88, -920, -5007, 331, 503378, 80362, -144165, -466163, -133093, 699159, 800866, 195380, -102248, -41970};
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
            double inForArr[] = {-3, -50, -186, 1305, 12134, 17767, -141779, -633589, -348219, 3463793, 8683308, 2974853, -17577093, -29965365, -17933651, -1806619, 1353272};
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
            double inForArr[] = {-4, -30, 102, 949, -430, -10893, -4835, 55162, 51172, -111298, -172303, 18119, 178009, 141089, 48182, 6592, -76, -67};
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
            double inForArr[] = {4, -5, -238, 225, 5939, -2580, -74616, -10198, 491474, 362864, -1514339, -2106418, 1071367, 3452289, 1965832, 113879, -152689, -17514, -421};
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
            double inForArr[] = {1, 10, 232, 69, 92, 137, 337, 372, 38283, 441, 443, 510, 555, 673, 700, 7332, 738, 906, 943826};
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
            double inForArr[] = {1, 10, 23, 69, 92, 137, 337, 372, 383, 441, 443, 510, 555, 673, 703450, 7332, 73248, 90326, 9424246, 255996};
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
