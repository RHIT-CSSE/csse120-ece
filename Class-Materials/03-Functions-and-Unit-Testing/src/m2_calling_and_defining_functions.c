/*
Permits exploration of CALLING and DEFINING FUNCTIONS, including functions with
ARGUMENTS and/or RETURN VALUES.
*/

#include <stdio.h>
#include <math.h>

// In C, a PROTOTYPE tells the compiler a function's name, return type, and
// parameter types before the function is called. Prototypes end with a
// semicolon; the actual function DEFINITION (below main) does not.
double get_celsius(double temperature_in_fahrenheit);
// TODO 4: Also add a prototype for get_fahrenheit here.


// -----------------------------------------------------------------------------
// TODO: 1.
//   Recall that a FUNCTION gives a NAME to a block of code,
//   and can have (and usually does have) PARAMETERS that receive values
//   from actual ARGUMENTS when the function is CALLED.
//  _
//   The   math.h   header is already included at the top of this file.
//   It provides math functions and the constants M_PI and M_E.
//  _
//   Below this TODO and the provided printf statement, call functions
//   from the math library to PRINT each of the following.
//   Use   printf("%f\n", ...)   for each value.
//     -- 0.5 radians converted to degrees
//          (hint: multiply by   180.0 / M_PI )
//     -- The base-2 logarithm of M_E
//          (hint: use   log2   and pass it   M_E   as the argument)
//     -- The length of the hypotenuse of a right triangle with legs 3.0
//          and 4.0
//          (hint: use   hypot   which takes two arguments)
//   After completing the above, hover over one of the function names to see
//   its documentation. This describes what the function does and what
//   parameters it requires.
// -----------------------------------------------------------------------------

int main(void) {
    printf("Calling Math Functions\n");


    // -------------------------------------------------------------------------
    // TODO: 3.
    //   Below this TODO and the provided printf statement, call get_celsius
    //   (defined below main) to PRINT:
    //     -- the temperature in Celsius of 1000 degrees Fahrenheit
    //     -- the temperature in Celsius of -80 degrees Fahrenheit
    //   Use   printf("%f\n", ...)   for each value.
    // -------------------------------------------------------------------------

    printf("\nCelsius\n");


    // -------------------------------------------------------------------------
    // TODO: 5.
    //   Below this TODO and the provided printf statement, call get_fahrenheit
    //   (which you will define below) to PRINT:
    //     -- the temperature in Fahrenheit of 40 degrees Celsius
    //     -- the temperature in Fahrenheit of -8 degrees Celsius
    //   Use   printf("%f\n", ...)   for each value.
    // -------------------------------------------------------------------------

    printf("\nFahrenheit\n");


    // -------------------------------------------------------------------------
    // TODO: 4. (continued)
    //   After writing get_fahrenheit with the correct signature, uncomment
    //   the line below marked DEEP MAGIC. If the return type or parameter type
    //   of your function does not match what is expected, this line will cause
    //   a compile error -- that is how you know to fix your function signature.
    // -------------------------------------------------------------------------
    // double (*fp)(double) = get_fahrenheit; // DEEP MAGIC

    return 0;
}


// -----------------------------------------------------------------------------
// TODO: 2.
//   The code below defines a function that returns the temperature in Celsius
//   of a given temperature in Fahrenheit.
//  _
//   Look at the function carefully. Notice:
//     -- The RETURN TYPE appears before the function name.  Here it is
//          double   meaning the function returns a decimal number.
//     -- Each PARAMETER has its type listed before the parameter name.
//          Here the single parameter is also   double.
//     -- The function body (enclosed in { }) contains the computation and
//          a   return   statement to send the result back to the caller.
//  _
//   A block comment above a function serves as informal documentation,
//   describing what the function does without needing to read the body.
//  _
//   Once you understand how this function is structured, mark this TODO done
//   and move on to TODO 3 (in main, above).
// -----------------------------------------------------------------------------

/*
 * Returns the temperature in Celsius of the given Fahrenheit temperature.
 * For example, returns 0.0 when given 32.0.
 *
 * Parameter: temperature_in_fahrenheit (double)
 * Returns: double
 */
double get_celsius(double temperature_in_fahrenheit) {
    return (temperature_in_fahrenheit - 32) * (5.0 / 9.0);
}


// -----------------------------------------------------------------------------
// TODO: 4.
//   Write the code below to define a new function   get_fahrenheit.
//   This function should convert a Celsius temperature to Fahrenheit.
//  _
//   Your function definition must include all required components:
//       - A RETURN TYPE before the function name  (hint: double)
//       - The function name:   get_fahrenheit
//       - A PARAMETER LIST in parentheses  (hint: one double parameter)
//       - A function body in { }, including a return statement
//  _
//   Also add a block comment above your function describing what it does.
//  _
//   You also need to add a PROTOTYPE for this function in the prototype
//   section near the top of this file (marked TODO 4).
//  _
//   After writing the function, see the DEEP MAGIC note in main above
//   (also marked TODO 4) for a way to verify your function signature.
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------
//   Compile and run your program from the Unix command line:
//       clang m2_calling_and_defining_functions.c -lm -o m2_calling_and_defining_functions.bin
//       ./m2_calling_and_defining_functions.bin
//
//   The   -lm   flag links the math library, which is needed for
//   functions like   log2   and   hypot   and constants like   M_E.
//
//   Confirm that you see the program output in the terminal.
// -----------------------------------------------------------------------------
