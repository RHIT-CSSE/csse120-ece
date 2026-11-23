/*
Introductory exploration of FUNCTIONS.

Provides examples of DEFINING functions with PARAMETERS, then CALLING functions
with ARGUMENTS. Demonstrates how function RETURNS can be CAPTURED in a
variable. Lets you practice TRACING BY HAND function execution.
*/


#include <stdio.h>

// -----------------------------------------------------------------------------
// TODO: 1.
//   1. READ the code below.
//   2. TRACE (by hand) the execution of the code, predicting the output.
//   3. Run the code and compare your prediction to what actually was printed.
//   4. Make sure you understand the CONCEPTS and the NOTATIONS for:
//        -- DEFINING a function that has PARAMETERS
//        -- CALLING a function with actual ARGUMENTS.
//        -- RETURNING information from a function.
//        -- CAPTURING function returns in variables.
//      Ask questions as necessary until these concepts are clear.
// -----------------------------------------------------------------------------

// In C, functions must be declared before they are used IF the
// code for the caller comes before the code for the function itself.
// These PROTOTYPES tell the compiler about each function's name,
// return type, and parameters.
void hello(const char* friend); // <= note that the prototype ends with a semicolon, and the function definition does not
const char* goodbye(const char* friend);
void hello_and_goodbye(const char* person1, const char* person2);

int main(void) {
    const char* friend = "Ada Lovelace";
    hello(friend);
    const char* result = goodbye("Alan Turing");
    printf("%s\n", result);
    hello("Katherine Johnson");
    friend = "Grace Hopper";
    hello_and_goodbye("Mark Dean", friend);
    hello_and_goodbye(friend, "Mark Dean");

    return 0;
}


void hello(const char* friend) {
    printf("Hello, %s\n", friend);
}

const char* goodbye(const char* friend) {
    printf("Goodbye, %s\n", friend);
    return "ByeByeBye";
}

void hello_and_goodbye(const char* person1, const char* person2) {
    hello(person2);
    goodbye(person1);
}

// -----------------------------------------------------------------------------
//   A reminder, to run your program from the Unix command line:
//       clang m1_intro_to_functions.c -o m1_intro_to_functions.bin
//       ./m1_intro_to_functions.bin
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------
// TODO: 2.
//   Long programs can make it hard to find a particular function in the file.
//  _
//   VS Code allows you to FOLD (hide or collapse) the code within a function,
//   which makes it easier to navigate long files.
//  -
//   To the left of each function definition above is a small arrow shape.
//   Click the arrow to FOLD the function. This hides the function body, but
//   leaves the function name visible. Click the arrow again to UNFOLD it.
//  _
//  _
//   Once you're confident you can FOLD and UNFOLD code, mark this
//   TODO as complete.
// -----------------------------------------------------------------------------