/*
Examples and exploration of values, variables, assignment statements, basic
mathematical operators, and expressions.

Also includes instructions on completing TODO items, and the
Git operations COMMIT and PUSH.
*/

#include <math.h>
#include <stdio.h>

int main(void) {
    // -------------------------------------------------------------------------
    // TODO: 1.
    //   Notice the small horizontal YELLOW marks visible on the scrollbar
    //   to the right. Each TODO in this module can be highlighted in VS Code.
    //  _
    //     a. You can use Search or the Outline to jump from one TODO to the next.
    //  _
    //     b. When you have completed a TODO, you should change the word
    //          TODO
    //        to
    //          DONE
    //        Try it now above.
    //  _
    //   If you change each TODO to DONE like this, you can tell when you have
    //   finished all the exercises in a module.
    //  _
    //   Mark this TODO as complete.
    //   Do likewise for all forthcoming TODOs in this course as you complete them.
    // -------------------------------------------------------------------------

    // -------------------------------------------------------------------------
    // TODO: 2.
    //   Read the code below. Predict (in your head)
    //   what will get printed (i.e., displayed) when the code runs.
    //  -
    //   Run the program and examine its output. Were your predictions correct?
    // -------------------------------------------------------------------------

    printf("Welcome to C!\n");
    printf("Programming is powerful.\n");
    printf("The computer does what we tell it!\n");

    // -------------------------------------------------------------------------
    // TODO: 3.
    //   Read the code below, which include EXPRESSIONS and ASSIGNMENT STATEMENTS
    //   using simple OPERATORS. Predict what will get printed when the code runs.
    //  -
    //   Delete the return line below, then run the program and examine its output.
    //   What does each operator do?
    // -------------------------------------------------------------------------

    // Treturn 0;

    int x = 6;
    int y = 3;
    int z = 8;

    printf("\n");
    printf("Variable Values\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    printf("\n");
    printf("Addition\n");
    printf("x + y = %d\n", x + y);
    int n = x + y + z;
    printf("x + y + z = %d\n", n);

    printf("Subtraction\n");
    n = x - y;
    printf("x - y = %d\n", n);
    printf("y - z = %d\n", y - z);

    printf("Multiplication\n");
    int m = x * y;
    printf("x * y = m = %d\n", m);
    m = m * y;
    printf("m * y = %d\n", m);

    printf("Division\n");
    double f = (double)z / y;
    printf("z / y = %f\n", f);
    printf("z / 2 = %f\n", (double)z / 2);

    // -------------------------------------------------------------------------
    // TODO: 4.
    //   Read the code below, which uses more C operators/functions.
    //  -
    //   Delete the return line below, then run the program and examine its output.
    //   What do these operators/functions do? Change the print statements to
    //   reflect the behavior.
    // -------------------------------------------------------------------------

    // Treturn 0;

    // Tprintf("Mystery Operator #1\n");
    double r_pow = pow(x, y);
    printf("pow(x, y) = %f\n", r_pow);
    printf("pow(z, 2) = %f\n", pow(z, 2));

    // Tprintf("Mystery Operator #2\n");
    int d = z / y;
    printf("z / y = %d\n", d);
    printf("x / y = %d\n", x / y);

    // Tprintf("Mystery Operator #3\n");
    int r_mod = z % y;
    printf("z %% y = %d\n", r_mod);
    printf("x %% y = %d\n", x % y);

    // -------------------------------------------------------------------------
    // TODO: 5.
    //   Write code below for the problem given in class by your instructor.
    // -------------------------------------------------------------------------


    // -------------------------------------------------------------------------
    // TODO: 6.
    //   Look at the list of files in your source folder.
    //   Note that this file:
    //      m2_variables_and_expressions.c
    //   is now shown as changed in source control.
    //  _
    //   COMMIT and PUSH your work from the Unix command line:
    //     1. Stage your file:
    //          git add m2_variables_and_expressions.c
    //  _
    //     2. Commit with a short, meaningful message:
    //          git commit -m "progress on m2"
    //  _
    //     3. Push to GitHub:
    //          git push
    //  _
    //   COMMIT adds the changed work to version control on your COMPUTER.
    //   This creates a local checkpoint.
    //  _
    //   PUSH sends that checkpoint to your remote repository in the cloud.
    //  _
    //   Always PUSH (in addition to COMMIT) so your work is backed up.
    //  _
    //   You can COMMIT and PUSH as often as you like.
    //   DO IT FREQUENTLY - AT LEAST once per module.
    // -------------------------------------------------------------------------

    return 0;
}

/*
Compile and run from the Unix command line:
  clang m2_variables_and_expressions.c -lm -o m2_variables_and_expressions.bin
  ./m2_variables_and_expressions.bin
*/
