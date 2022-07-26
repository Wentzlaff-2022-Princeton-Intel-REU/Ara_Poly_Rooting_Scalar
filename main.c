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
        
        if (i == 2) {
            poly.degree = 2;
            double inForArr[] = {-1,0,1};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        }
        

        else if (i == 3) {
            poly.degree = 3;
            double inForArr[] = {-5, -25, -44, -26};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        }

        else if (i == 4) {
            poly.degree = 4;
            double inForArr[] = {3, 25, 77, 91, 28};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n %d th degree Runtime (cycles): %d\n", i, cycleTime);
        }

        else if (i == 5) {
            poly.degree = 5;
            double inForArr[] = {-2, 13, -41, 61, -44, 12};
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
            double inForArr[] = {-2, -13, 22, 208, 40, -759, -459};
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
            double inForArr[] = {-5, 34, -18, -468, 1570, -1976, 971, -153};
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
            double inForArr[] = {3, -25, 3, 363, -213, -1929, 280, 3724, 1646};
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
            double inForArr[] = {-2, -17, -69, -124, -83, 25, 48, 7, -5, -0};
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
            double inForArr[] = {1, 4, -10, -73, -87, 74, 144, -30, -67, 5, 10};
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

        else if (i == 12) {
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

        else if (i == 13) {
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

        else if (i == 14) {
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

        else if (i == 15) {
            poly.degree = 20;
            double inForArr[] = {-4, 76, -282, -2716, 22738, -678, -463379, 994972, 3803599, -14559502, -10550879, 90782006, -21948476, -281381823, 165240384, 450724711, -236699601, -413487364, 67240728, 174714056, 43226306};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 20 th degree Runtime (cycles): %d\n", cycleTime);
        }

        else if (i == 16) {
            poly.degree = 30;
            double inForArr[] = {1, -15, 13, 1101, -5351, -26894, 246426, 94311, -5348220, 8335789, 63229022, -196201986, -377160944, 2165918619, 266036941, -13649803777, 11945815680, 48910040207, -84535142293, -82968523408, 270091877596, -10305553014, -430746132045, 252743932245, 286252929860, -307178018444, -12998348077, 91778681732, -18968444575, -2921373535, 744537251};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 30 th degree Runtime (cycles): %d\n", cycleTime);
        }

        else if (i == 17) {
            poly.degree = 40;
            double inForArr[] = {3, 61, 38, -5774, -31111, 179953, 1929390, -223463, -54818416, -130769616, 795793735, 3902144851, -4005519036, -56674609025, -53736132841, 452823009037, 1143067556853, -1612287504423, -9477139490659, -3653164810146, 41125919864181, 65300295555993, -74819091371243, -291681457026780, -106869160044400, 584050718416238, 799177864184781, -254703668299173, -1416494379121291, -935426216456274, 672204692539739, 1341777803092844, 578347431143873, -307910886516394, -464059818633362, -213257778724205, -31581991069173, 9515232042679, 4895745020346, 779809642054, 42166005078};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 40 th degree Runtime (cycles): %d\n", cycleTime);
        }

        else if (i == 18) {
            poly.degree = 50;
            double inForArr[] = {-3, 2, 627, -502, -61447, 49040, 3708523, -2971089, -154470707, 125004509, 4711958527, -3874650152, -109006201429, 91594021151, 1954102232198, -1686605270566, -27501419620281, 24500770758629, 306005991667228, -282688055758433, -2698194126375374, 2596395619586719, 18818844544893320, -18953933958766384, -103218585030416384, 109427946322781600, 440715673899650304, -495478508112241984, -1442477054035568384, 1738593675083242496, 3538057480519156224, -4652200260985607168, -6281698991152558080, 9292351044490647552, 7606419967203924992, -13460620949066037248, -5497754758387153920, 13576216592484575232, 1260885181294331648, -8958417952740491264, 1374887030249671424, 3464988764740046848, -1252371286130178816, -603715090363392512, 369129994887323136, 2246150645455602, -29378457762278444, 3271949326086829, 367205269269926, -11400666970826, -892928156428};
            poly.coefficients = inForArr;
            double roots[poly.degree];
            double convCrit = 1e-14;

            start_timer();
            newton(poly, roots, convCrit);
            stop_timer();
            int64_t cycleTime = get_timer();

            printf("\n 50 th degree Runtime (cycles): %d\n", cycleTime);
        }

        else if (i == 19) {
            poly.degree = 100;
            double inForArr[] = {1, -26, 162, 4721, -70252, -192173, 9334209, -27115622, -670960395, 4566011837, 27759164398, -350487259225, -434292376401, 17558856567588, -24450292002632, -626829969054661, 2204597452314389, 16170479207957038, -97126886804482128, -281895429261519072, 3001189786383162368, 2079089294252476672, -70930786335259017216, 57404828985050816512, 1322058299783450460160, -2772841519082507337728, -19506276491800841551872, 68153687206749668376576, 221933254773761334312960, -1220931242374237834444800, -1754056597795096609423360, 17344981556192375186915328, 4786309375284593832230912, -201807514655676329002795008, 123397203018387561014886400, 1947464222136123705004130304, -2735066181398928365862256640, -15592320108549630234174947328, 34891313921382354719409700864, 102216766884522827457983676416, -337023123294218061832970567680, -526641586568391107625500016640, 2647204946053310401472079331328, 1868542070064012441470292197376, -17409953057185379068334074494976, -1468639775542887555710670864384, 97159738421972281183437974405120, -40678303613045222202999937433600, -462758773557550258543439393062912, 401932995021147101837144845451264, 1881766956631257144158178756263936, -2473698762908824704152146712461312, -6500717714249850004451848934653952, 11770102470415907875428055010770944, 18844552926280501859576330491789312, -46031189509463548086784409387139072, -44618593884506214427593321127870464, 151743520172652345622009993926541312, 80760803857226695938873512964390912, -426698093787730673798658288565354496, -87756109975957269614681313693925376, 1029352163414956892843112926273339392, -54136731855532942652568527253274624, -2134318920794285791532589544045019136, 567925913387513349182471172909957120, 3802316418452522892881608071440236544, -1709755415027956543270671844437393408, -5806194028719186161480258840342560768, 3560687904630351242448219558538903552, 7569562308454745076594009199620390912, -5785320421542287486938693815416913920, -8378533269892054327104267581913038848, 7613826294558691341774235948587941888, 7817877989984092054865806549973991424, -8223068235205060989918495662317502464, -6096021185692051652284588055836229632, 7305518282123971765393495445978742784, 3931998017179561459272570373622726656, -5318739517404567661177331345673682944, -2074584240234628705986492987462385664, 3147002709850427038744346115700686848, 885784848195807975769593597036331008, -1494678240626388310501770511628894208, -303925017253815920705866999909056512, 560471901597250449557249308900720640, 84039508643659963007061225707143168, -162382071979554938625052596466876416, -19072711001038387737571456398131200, 35337775518482007152644747859853312, 3635640761224675484202211204923392, -5559370190122487249921019857600512, -573948555958151617630353489920000, 597967923683285784159575179526144, 68704874569143053823134348083200, -40190059012342349647058353258496, -5347905248865164776213533687808, 1427354495809058666163900252160, 215157424787323596275462438912, -18038182954525764778226352128, -2698136555632611724695175168, 43837038794558110252924928};
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
