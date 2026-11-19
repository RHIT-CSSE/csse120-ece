/*
Review exercises for Session 02. Requires knowledge of values, variables,
expressions, data types, and the math library.
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef EDU_UNIT_TESTING
/*
 * Don't worry about this block: it is just some magic for the automated tests,
 * and you do not need to understand it. edu_unit builds this file with
 * EDU_UNIT_TESTING, and the tests need to check the swap in TODO 2 against
 * known values. A normal build is unaffected and still uses the real
 * rand()/srand().
 */
static int edu_unit_rand_value = 84;

static void edu_unit_srand(unsigned int seed) {
    (void)seed;
    edu_unit_rand_value = 84;
}

static int edu_unit_rand(void) {
    int value = edu_unit_rand_value;
    edu_unit_rand_value = 88;
    return value;
}

#define srand edu_unit_srand
#define rand edu_unit_rand
#endif

int main(void) {
    srand((unsigned int)time(NULL));

    // -------------------------------------------------------------------------
    // TODO: 1.
    //   Uncomment the following and PREDICT what will get printed.
    //   Then run the program, checking to see whether your prediction is correct.
    //  _
    //   If your prediction was not correct, and you don't understand why, ask
    //   your instructor for help.  Note this requires the math library, so you will 
    //   need to link with -lm when you compile.
    // -------------------------------------------------------------------------

    // printf("\n");
    // printf("_TODO 1_\n");
    // int x = 10;
    // int y = 75;
    // x = y;
    // y = x;
    // printf("%d %d\n", x, y);

    // -------------------------------------------------------------------------
    // TODO: 2.
    //   Uncomment the first block of code below. These statements assign random
    //   integers between 1 and 99 to variables a and b, then print their values.
    //   Don't worry about how this code works, just trust that it works!
    //  _
    //   Run the program a few times - notice how the values printed change!
    //  _
    //   Write code where indicated to SWAP the values of a and b.
    //   For example, if the random values of a and b are 40 and 33, respectively,
    //   the program output would be:
    //       Original: 40 33
    //       Swapped: 33 40
    //  _
    //   Make sure you actually swap the values (or contents) of the variables
    //   a and b. Do not change either of the provided printf statements.
    //  _
    //   This is a tricky problem. If you are stuck for more than a few minutes,
    //   ask for help.
    //  _
    //   HINT: You may need more than one line of code to swap the values.
    // -------------------------------------------------------------------------

    // printf("\n");
    // printf("_TODO 2_\n");
    // int a = rand() % 99 + 1;
    // int b = rand() % 99 + 1;
    // printf("Original: %d %d\n", a, b);

    // Write the SWAP code here, then uncomment the printf statement below
    // Do NOT change the printf statement, or the code given above

    // printf("Swapped: %d %d\n", a, b);

    // -------------------------------------------------------------------------
    // TODO: 3.
    //   Uncomment and read the code below. It calculates an approximation of the
    //   mathematical constant  e. Then, the approximate and actual values of e
    //   are displayed, both rounded to 7 decimal digits.
    //  _
    //   The .7 part in %.7f tells printf to display 7 digits after the decimal.
    //  _
    //   Change the number in both printf format strings so that the actual and
    //   approximate values of e look the same when the
    //   program runs.
    //  -
    //   TIP: Values should only be rounded when they are being printed
    //        (displayed), and not when they are used for calculations or
    //        assigned to a variable. We want variables to store the complete
    //        unrounded value so that our program's computations will be precise.
    // -------------------------------------------------------------------------

    // printf("\n");
    // printf("_TODO 3_\n");
    // double approx_e = 878.0 / 323.0;
    // printf("Approximate e: %.7f\n", approx_e);
    // printf("Actual e: %.7f\n", M_E);

    // -------------------------------------------------------------------------
    // TODO: 4.
    //   Compute and print the cube root of 343. Then, compute and print the sine
    //   of that result, rounded to 5 decimal places. (hint if square root is SQrt then 
    //   cube root is...)
    //
    // Print your answers to 5 decimal places using %.5f in your printf
    //  _
    //   Make sure to add your code  * after *  the _TODO_ print statement.
    // -------------------------------------------------------------------------

    printf("\n");
    printf("_TODO 4_\n");

    // -------------------------------------------------------------------------
    // TODO: 5.
    //   Write code below for the problem given in class by your instructor.
    // -------------------------------------------------------------------------

    printf("\n");
    printf("_TODO 5_\n");

    // -------------------------------------------------------------------------
    // TODO: 6.
    //   Ensure that no yellow TODO markers remain,
    //   verify that your code works, then COMMIT and PUSH your work as before.
    //  _
    //   If you've completed all of the modules, submit your code to Gradescope
    //   as demonstrated by your instructor.
    //  _
    //   From the Unix command line:
    //      git add m6_review.c
    //      git commit -m "progress on m6"
    //      git push
    // -------------------------------------------------------------------------

    return 0;
}
