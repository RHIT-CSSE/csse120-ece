/*
This module helps you understand:
  -- UNIT TESTING.
  -- the difference between PRINT and RETURN
*/

#include <stdio.h>
#include <math.h>

// -----------------------------------------------------------------------------
// TODO: 1.
//   Read the block comment and code for the   distance   function below.
//   Once you understand how this function works, what its parameters are,
//   and what it returns, mark this TODO as done.
// -----------------------------------------------------------------------------

/*
 * Given x and y coordinates describing a point, returns the distance between
 * that point and (0, 0).
 *
 * Example: If the arguments are 3, 4 this function returns 5,
 * because point (3, 4) is 5 units away from point (0, 0).
 *
 * Parameters: x (double), y (double)
 * Returns: double
 */
double distance(double x, double y) {
    // This code has an error, on purpose.  Do NOT fix it.
    double x_squared = x * x;
    double y_squared = y * x;

    return sqrt(x_squared + y_squared);
}


// -----------------------------------------------------------------------------
// TODO: 2.
//   UNIT TESTING is a software testing method by which individual units of
//   source code are tested independently of one another. In CSSE 120, we use
//   unit tests to verify that individual functions are correct by comparing the
//   EXPECTED function output with the ACTUAL result.
//  _
//   The  run_test_distance  function defined below TESTS the  distance
//   function defined above.
//  _
//   A basic test function does the following several times:
//  _
//     1.  The  HUMAN  tester provides the CORRECT (expected) answer
//         for a particular test case.
//     2.  The test function CALLS the function being tested, passing it the
//         selected test case as input. The code CAPTURES the returned value
//         in a variable (actual).
//     3.  The test function then PRINTS both the EXPECTED answer and the ACTUAL
//         answer returned by the function.
//  _
//   The above forms a single TEST for a function that returns a value.
//   When the developer/tester runs the test function, they compare the
//   EXPECTED and ACTUAL values that are printed.
//     -- If they are the same, the code PASSED the test.
//     -- If they are different, the code FAILED the test.
//  _
//   If the code failed the test, the developer then uses tools like a
//   debugger to find the source of the error and fix it.
// -----------------------------------------------------------------------------

void run_test_distance(void) {
    double expected, actual;

    // Test 1: point at (1, 1)
    expected = sqrt(2.0);       // EXPECTED result computed using sqrt
    actual = distance(1.0, 1.0);   // ACTUAL result from calling the function
    // Print both results for comparison
    printf("Test 1 expected: %f\n", expected);
    printf("       actual:   %f\n", actual);

    // Test 2:
    expected = 5.0;             // This expected value was computed by hand.
    actual = distance(3.0, 4.0);
    printf("Test 2 expected: %f\n", expected);
    printf("       actual:   %f\n", actual);

    // Test 3:
    expected = 0.0;
    actual = distance(0.0, 0.0);
    printf("Test 3 expected: %f\n", expected);
    printf("       actual:   %f\n", actual);

    // Add your test here
}


// -----------------------------------------------------------------------------
// TODO: 3.
//   RUN this program now.  Did the DISTANCE function pass its tests?
//  _
//   Add one more UNIT TEST to the   run_test_distance  function above,
//   and rerun the program. Does the DISTANCE function pass or fail your test?
//  _
//   No need to correct the   distance  function -- just make sure you
//   understand how to write, run, and check the results of a UNIT TEST.
// -----------------------------------------------------------------------------


int main(void) {
    run_test_distance();
    return 0;
}


// -----------------------------------------------------------------------------
//   Compile and run your program from the Unix command line:
//       clang m3_unit_testing.c -lm -o m3_unit_testing.bin
//       ./m3_unit_testing.bin
//
//   Confirm that you see the program output in the terminal.
// -----------------------------------------------------------------------------
