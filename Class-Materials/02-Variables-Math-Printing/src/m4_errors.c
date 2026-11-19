/*
An introduction to ERRORS and ERROR MESSAGES in C.
*/

#include <stdio.h>

int main(void) {
    // -------------------------------------------------------------------------
    // TODO: 1.
    //   Uncomment the following and then COMPILE the program,
    //   paying close attention to what gets printed.
    //  _
    //   Then comment-out the line that causes the syntax error.
    //  _
    //   A SYNTAX ERROR occurs when clang cannot translate the
    //   source code (written by humans) into an executable program.
    //   As the programmer, it is our job to write code that is
    //   free of errors!
    //  _
    //   Now type some other statement that causes a syntax error,
    //   for example a statement that is missing a required semicolon
    //   or closing parenthesis.
    //   Compile again to see the error message from your syntax error.
    //   Then, comment out the line you added before moving on.
    // -------------------------------------------------------------------------

    // printf("\n");
    // printf("_TODO 1_\n");
    // 8 = a;
    //
    // Add your code here
    //
    // printf("Complete\n");

    // -------------------------------------------------------------------------
    // TODO: 2.
    //   Uncomment the following and then COMPILE and RUN the program,
    //   paying close attention to what gets printed, especially the error message.
    //   If you do not see the error message, scroll up in the terminal.
    //  _
    //   Read the error message closely. What kind of error occurred? What hints
    //   does it give us about the source of the error?
    //  _
    //   Once you are familiar with the error message and understand what caused
    //   the error, comment-out the line that causes the run-time error.
    //  _
    //   A RUN-TIME ERROR occurs when the program compiles correctly,
    //   but runs into trouble while executing instructions.
    // -------------------------------------------------------------------------

    // printf("\n");
    // printf("_TODO 2_\n");
    // printf("3 + 2 evaluates to: %d\n", 3 + 2);
    // int zero = 0;
    // printf("3 / 0 evaluates to: %d\n", 3 / zero);
    // printf("Complete\n");

    // -------------------------------------------------------------------------
    // TODO: 3.
    //   Uncomment the following and then COMPILE the program. Read the error
    //   message closely. What kind of error occurred? What hints does it give us
    //   about the source of the error?
    //  _
    //   This is an example of another kind of error. In C, some bad operations
    //   are caught by the compiler before the program even runs.
    //  _
    //   Comment-out the first line that causes the error
    //   and compile the program again to ensure there are no other errors.
    // -------------------------------------------------------------------------

    // printf("\n");
    // printf("_TODO 3_\n");
    // printf("3 / \"hello\" evaluates to: %d\n", 3 / "hello");
    // printf("Complete\n");

    // -------------------------------------------------------------------------
    // TODO: 4.
    //   Uncomment the following code and then compile/run the program,
    //   paying close attention to what gets printed.
    //  _
    //   For each error you encounter, determine whether it is a SYNTAX,
    //   COMPILE-TIME, or RUN-TIME error. Did you discover any new error types?
    //   Did something work that you expected to cause an error?
    //  _
    //   Comment out the line that causes an error, then compile or rerun the
    //   program. Repeat until there are no errors.
    // -------------------------------------------------------------------------

    // printf("\n");
    // printf("_TODO 4_\n");

    // char s[] = "a string;
    // int num = 5;

    // printf("%d\n", "test" * num);
    // printf("%s\n", "test" " more");

    // printf("test\n")
    // printf("Complete\n");

    // -------------------------------------------------------------------------
    // TODO: 5.
    //   Ensure that no yellow TODO markers remain,
    //   verify that the code compiles and runs without errors,
    //   then COMMIT and PUSH your work.
    //  _
    //   From the Unix command line:
    //      git add m4_errors.c
    //      git commit -m "progress on m4"
    //      git push
    // -------------------------------------------------------------------------

    return 0;
}

/*
Compile and run from the Unix command line:
  clang m4_errors.c -o m4_errors.bin
  ./m4_errors.bin
*/
