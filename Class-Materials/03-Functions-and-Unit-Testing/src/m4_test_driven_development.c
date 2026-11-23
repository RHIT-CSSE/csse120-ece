/*
This module demonstrates and practices:
  -- DEFINING a simple FUNCTION,
  -- using PARAMETERS in function DEFINITIONS,
  -- CALLING a user-defined function with ARGUMENTS,
  -- RETURNING a value from a function,
        CAPTURING the RETURNED VALUE in a VARIABLE, and
  -- UNIT TESTING.
*/

#include <math.h>
#include <stdio.h>

float cube(float number);
float cube_root(float number);
void run_test_cube(void);
void run_test_cube_root(void);


int main(void) {
    run_test_cube();
    // TODO: 6. Once you have written your run_test_cube_root tests (TODO 4)
    //   and implemented cube_root (TODO 5), uncomment the call above to
    //   run_test_cube_root().  Recompile, run, and check all tests pass.

    return 0;
}


// -----------------------------------------------------------------------------
// TODO: 1.
//   Read the   cube   function at the bottom of this file.
//  _
//   It defines a  cube  function that takes a single PARAMETER of type float,
//   raises it to the third power, and RETURNS the result.
//  _
//   Notice the block comment above the function. It summarizes what the
//   function does, including the data type of the parameter and return value.
//   In C, we document types this way rather than using type hints.
//  _
//   This is a very simple function, but provides an easy-to-understand example.
//   Once you understand what cube does, mark this TODO done.
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------
// TODO: 2.
//   Read the run_test_cube function below. It tests the  cube  function using
//   UNIT TESTING.
//  _
//   Add ** 2 ** more unit tests for the  cube  function to this test function.
//   Use the same unit test format as the given test, and compute the expected
//   result by hand or via some other method (but NOT by calling  cube ).
// -----------------------------------------------------------------------------
void run_test_cube(void) {
    printf("\n");
    printf("---------------------------------------------\n");
    printf("Testing the   cube   function:\n");
    printf("---------------------------------------------\n");

    // Test 1:
    float expected = 4.0f * 4.0f * 4.0f;  // which is 64
    float actual = cube(4.0f);
    printf("Test 1 expected: %f\n", expected);
    printf("       actual:   %f\n", actual);

    // -------------------------------------------------------------------------
    // TODO: 2 (continued).
    //   Below this comment, add 2 more test cases of your own choosing, using
    //   the same format as the test given above.
    // -------------------------------------------------------------------------

}

// -----------------------------------------------------------------------------
// TODO: 3.
//   Once you have written your unit tests, recompile and run the program.
//   Examine the output -- the expected and actual results should match.
//   Did you pass all the tests? Make any necessary corrections, then mark
//   this TODO as complete.
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------
// TODO: 4.
//   Implement the   run_test_cube_root   function below. It will TEST the
//   cube_root function that you implement at the bottom of this file (TODO 5).
//   Include at least ** 3 ** unit tests.
//  _
//   Writing the unit tests BEFORE implementing the function is called
//   TEST-DRIVEN DEVELOPMENT (TDD).  This generally leads to better tests,
//   and ensures every function will be tested.
//  _
//   In this course, test-driven development has 5 steps:
//       1.  Read the block comment of the function being tested. Understand
//           what that function SHOULD return.
//       2.  Pick a test case: a number you could pass as an argument.
//       3.  Figure out the CORRECT (EXPECTED) answer for your test case.
//       4.  Write code that prints both the EXPECTED and the ACTUAL answer
//           returned when you call the function. Use the same format as
//           the cube tests above.
//       5.  After sufficient unit tests have been written (and NOT before!),
//           implement the function. Then use the tests to verify it is correct.
//  _
//   Complete Steps 1 through 4 here, writing at least ** 3 ** tests.
//   For Step 1, read the block comment for cube_root at the bottom of this
//   file.
// -----------------------------------------------------------------------------
void run_test_cube_root(void) {
    printf("\n");
    printf("---------------------------------------------\n");
    printf("Testing the   cube_root   function:\n");
    printf("---------------------------------------------\n");

    // Write your unit tests here.
}

// -----------------------------------------------------------------------------
// TODO: 5.
//   Implement the   cube_root   function at the bottom of this file.
//   (The TODO 5 section there will guide you.)
//  _
//   Once implemented, return here:
//     -- Uncomment the call to run_test_cube_root() in main() (TODO 6).
//     -- Recompile and run.
//     -- Did cube_root pass all its tests?
//     -- Make any necessary corrections until it does.
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------
//   The   cube   function.
//
//   Read this function carefully. It takes a single parameter of type float,
//   computes and returns its cube (number raised to the third power).
//
//   Notice:
//     -- The RETURN TYPE (float) appears before the function name.
//     -- The PARAMETER has its type (float) listed before its name.
//     -- The function body contains a single return statement.
// -----------------------------------------------------------------------------

/*
 * Returns the cube of the given number.
 * Example: given 4.0, returns 64.0  (4^3 = 64)
 *
 * Parameter: number (float)
 * Returns: float
 */
float cube(float number) {
    return number * number * number;
}


// -----------------------------------------------------------------------------
// TODO: 5. (continued from above)
//   Implement the   cube_root   function below, according to its block comment.
//   Hint: the standard math library provides a   cbrtf   function.
//   When you are done, return to the tests above and continue with TODO 6.
// -----------------------------------------------------------------------------

/*
 * Returns the cube root of the given number.
 * Example: given 27.0, returns 3.0
 *
 * Parameter: number (float)
 * Returns: float
 */
float cube_root(float number) {
    return 0.0f;
}


// -----------------------------------------------------------------------------
//   Compile and run your program from the Unix command line:
//       clang m4_test_driven_development.c -lm -o m4_test_driven_development.bin
//       ./m4_test_driven_development.bin
//
//   The   -lm   flag links the math library needed by cube_root.
// -----------------------------------------------------------------------------
