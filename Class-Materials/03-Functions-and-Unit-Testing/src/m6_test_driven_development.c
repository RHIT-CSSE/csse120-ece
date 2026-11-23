/*
This module demonstrates and practices:
  -- DEFINING functions that call other functions,
  -- using PARAMETERS in function DEFINITIONS,
  -- using ARGUMENTS in function CALLs,
  -- RETURNING a value from a function,
        possibly CAPTURING the RETURNED VALUE in a VARIABLE, and
  -- UNIT TESTING.
*/

#include <stdio.h>

int sum_of_digits(int number);
int digits_in_cube(int n);
int digits_in_power(int n, int k);
void run_test_sum_of_digits(void);
void run_test_digits_in_cube(void);
void run_test_digits_in_power(void);


int main(void) {
    run_test_sum_of_digits();
    run_test_digits_in_cube();
    run_test_digits_in_power();

    // -------------------------------------------------------------------------
    // TODO: 6.
    //   DO THIS LAST!
    //  _
    //   Run the automated tests from this folder:
    //       edu_unit m6.lua
    //  _
    //   If all tests pass, you will see Success for each case and the full
    //   point total. If not, the output names the row that failed.
    //   Ask your instructor for help if needed.
    // -------------------------------------------------------------------------

    return 0;
}


// -----------------------------------------------------------------------------
// TODO: 1.
//   This TEST function tests the  sum_of_digits  function.
//   Implement this TEST function, as follows:
//  _
//     1.  Read the block comment of  sum_of_digits  at the bottom of this
//         file. Be sure you understand exactly what  sum_of_digits  SHOULD
//         return. You do NOT need to read the function's code.
//     2.  Pick a test case: a number you could pass as an argument to
//         sum_of_digits. For example, you could choose 826.
//     3.  Figure out the CORRECT (EXPECTED) answer for your test case.
//         If the argument is 826, the digit sum is  8 + 2 + 6 = 16.
//     4.  Write code that prints both the EXPECTED answer and the ACTUAL
//         answer returned when you call the function. See the example below.
//  _
//   We have written two tests as an example. Below them, add ** 1 ** more.
// -----------------------------------------------------------------------------
void run_test_sum_of_digits(void) {
    printf("\n");
    printf("-----------------------------------------------\n");
    printf("Testing the   sum_of_digits   function:\n");
    printf("-----------------------------------------------\n");

    // Test 1:
    int expected = 16;
    int actual = sum_of_digits(826);
    printf("Test 1 expected: %d\n", expected);
    printf("       actual:   %d\n", actual);

    // Test 2:
    expected = 3 + 7 + 6 + 9 + 4;
    actual = sum_of_digits(37694);
    printf("Test 2 expected: %d\n", expected);
    printf("       actual:   %d\n", actual);

    // -------------------------------------------------------------------------
    // TODO: 1 (continued). Add 1 more test case below.
    // -------------------------------------------------------------------------

}


// -----------------------------------------------------------------------------
// TODO: 2.
//   Implement this function. It TESTS the  digits_in_cube  function.
//   Include at least ** 3 ** tests (two are written for you).
//  _
//   Use the same 4-step process as above:
//     1.  Read the block comment of  digits_in_cube  at the bottom of this
//         file.
//     2.  Pick a test case.
//     3.  Figure out the CORRECT (EXPECTED) answer.
//     4.  Write code that prints EXPECTED and ACTUAL.
//  _
//   Add at least ** 1 ** more unit test below the two given tests.
// -----------------------------------------------------------------------------
void run_test_digits_in_cube(void) {
    printf("\n");
    printf("-----------------------------------------------\n");
    printf("Testing the   digits_in_cube   function:\n");
    printf("-----------------------------------------------\n");

    // Test 1:
    int expected = 2 + 7;   // 3^3 = 27
    int actual = digits_in_cube(3);
    printf("Test 1 expected: %d\n", expected);
    printf("       actual:   %d\n", actual);

    // Test 2:
    expected = 37;          // 142^3 = 2863288
    actual = digits_in_cube(142);
    printf("Test 2 expected: %d\n", expected);
    printf("       actual:   %d\n", actual);

    // -------------------------------------------------------------------------
    // TODO: 2 (continued). Add 1 more test case below.
    // -------------------------------------------------------------------------

}


// -----------------------------------------------------------------------------
// TODO: 3.
//   Implement the   digits_in_cube   function at the bottom of this file.
//   (The TODO 3 section there will guide you.)
//  _
//   Once implemented, recompile and run. Did digits_in_cube pass all its tests?
//   Make corrections until it does, then mark this TODO complete.
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------
// TODO: 4.
//   Implement this function. It TESTS the  digits_in_power  function.
//   Include at least ** 3 ** tests (two are written for you).
//  _
//   Use the same 4-step process as above:
//     1.  Read the block comment of  digits_in_power  at the bottom of this
//         file.
//     2.  Pick a test case.
//     3.  Figure out the CORRECT (EXPECTED) answer.
//     4.  Write code that prints EXPECTED and ACTUAL.
//  _
//   Add at least ** 1 ** more unit test below the two given tests.
// -----------------------------------------------------------------------------
void run_test_digits_in_power(void) {
    printf("\n");
    printf("-----------------------------------------------\n");
    printf("Testing the   digits_in_power   function:\n");
    printf("-----------------------------------------------\n");

    // Test 1:
    int expected = 2 + 7;   // 3^3 = 27
    int actual = digits_in_power(3, 3);
    printf("Test 1 expected: %d\n", expected);
    printf("       actual:   %d\n", actual);

    // Test 2:
    expected = 1 + 6;       // 2^4 = 16
    actual = digits_in_power(2, 4);
    printf("Test 2 expected: %d\n", expected);
    printf("       actual:   %d\n", actual);

    // -------------------------------------------------------------------------
    // TODO: 4 (continued). Add 1 more test case below.
    // -------------------------------------------------------------------------

}


// -----------------------------------------------------------------------------
// TODO: 5.
//   Implement the   digits_in_power   function at the bottom of this file.
//   (The TODO 5 section there will guide you.)
//  _
//   Once implemented, recompile and run. Did digits_in_power pass all its
//   tests? Make corrections until it does, then mark this TODO complete.
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------
// Students:
//   Do NOT touch this function.
//   Do NOT copy code from this function.
//
//   Instead, ** CALL ** this function as needed in the other problems.
//
//   The ONLY part of this function that you need to understand is
//   the block comment below. Treat this function as a black box -- there
//   is no need to read or understand the code inside.
// -----------------------------------------------------------------------------

/*
 * Returns the sum of the digits in the given integer.
 *
 * Example: If the integer is 83135, this function returns 8+3+1+3+5 = 20.
 *
 * Parameter: number (int)
 * Returns: int
 */
int sum_of_digits(int number) {
    if (number < 0) {
        number = -number;
    }
    int digit_sum = 0;
    while (number != 0) {
        digit_sum += number % 10;
        number /= 10;
    }
    return digit_sum;
}


// -----------------------------------------------------------------------------
// TODO: 3. (continued from above)
//   Implement the   digits_in_cube   function below, according to its block
//   comment. CALL sum_of_digits as needed -- do NOT copy its code.
//   When done, return to the tests above and continue with TODO 4.
// -----------------------------------------------------------------------------

/*
 * Returns the sum of the digits in the cube of the given number.
 *
 * Example: If n is 5 (so n^3 is 125), this function returns 1+2+5 = 8.
 *
 * Parameter: n (int)
 * Returns: int
 */
int digits_in_cube(int n) {
    return 0;
}


// -----------------------------------------------------------------------------
// TODO: 5. (continued from above)
//   Implement the   digits_in_power   function below, according to its block
//   comment. CALL sum_of_digits as needed -- do NOT copy its code.
//   When done, return to the tests above and continue with TODO 6.
// -----------------------------------------------------------------------------

/*
 * Returns the sum of the digits in n raised to the kth power.
 *
 * Example: If n is 12 and k is 3, this function returns 18,
 * because 12^3 = 1728, and 1+7+2+8 = 18.
 *
 * Parameters: n (int), k (int)
 * Returns: int
 */
int digits_in_power(int n, int k) {
    return 0;
}


// -----------------------------------------------------------------------------
//   Compile and run your program from the Unix command line:
//       clang m6_test_driven_development.c -o m6_test_driven_development.bin
//       ./m6_test_driven_development.bin
// -----------------------------------------------------------------------------
