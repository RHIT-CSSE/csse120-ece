/*
Exploration of C data types, printf format specifiers, and conversions
between numbers, characters, and strings.
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // -------------------------------------------------------------------------
    // TODO: 1.
    //   Read the assignment statements below.
    //   Then match each variable with the CORRECT printf format letter.
    //
    //   Use these common format letters:
    //      int      -> %d
    //      float    -> %f
    //      char     -> %c
    //      string   -> %s
    // -------------------------------------------------------------------------

    int a = 15;
    float b = 3.7f;
    int c = 42;
    char d[] = "Goodbye!";
    bool e = true;
    char f[] = "568";

    printf("\nSection 1: Printf Format Letters\n");
    printf("--------------------------------\n");

    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %d\n", c);
    printf("d = %s\n", d);
    printf("e = %d\n", e);  // bool prints as 1 (true) or 0 (false)
    printf("f = %s\n", f);


    

    // -------------------------------------------------------------------------
    // TODO: 2.
    //   This section is about CONVERTING between bool, int, and float.
    //   Predict each conversion result, then run and compare.
    // -------------------------------------------------------------------------

    printf("\nSection 2: Conversions (bool, int, float)\n");
    printf("------------------------------------------\n");

    int x = 6;
    float z = 2.5f;
    bool flag = true;

    float int_to_float = (float)x;
    int float_to_int = (int)z;

    int bool_to_int = (int)flag;
    bool int_to_bool_zero = (bool)0;
    bool int_to_bool_nonzero = (bool)x;

    float bool_to_float = (float)flag;
    bool float_to_bool_zero = (bool)0.0f;
    bool float_to_bool_nonzero = (bool)z;

    printf("int -> float: x = %d, (float)x = %f\n", x, int_to_float);
    printf("float -> int: z = %f, (int)z = %d\n", z, float_to_int);

    printf("bool -> int: flag = %d, (int)flag = %d\n", flag, bool_to_int);
    printf("int -> bool: (bool)0 = %d, (bool)x = %d\n", int_to_bool_zero, int_to_bool_nonzero);

    printf("bool -> float: (float)flag = %f\n", bool_to_float);
    printf("float -> bool: (bool)0.0 = %d, (bool)z = %d\n", float_to_bool_zero, float_to_bool_nonzero);

    // -------------------------------------------------------------------------
    // TODO: 3.
    //   This section is about characters, strings, and conversions.
    //   Read each example, then run the program.
    //
    //   Conversions shown:
    //      number -> string  (snprintf)
    //      string -> int     (atoi)
    //      string -> float   (atof)
    // -------------------------------------------------------------------------

    printf("\nSection 3: char, string, conversions\n");
    printf("------------------------------------\n");

    char letter = 'Q';
    char word[] = "120";
    char phrase[] = "3.14";

    printf("letter = %c\n", letter);
    printf("word   = %s\n", word);
    printf("phrase = %s\n", phrase);

    // number -> string
    char int_as_string[20];
    char float_as_string[20];
    snprintf(int_as_string, sizeof(int_as_string), "%d", a);
    snprintf(float_as_string, sizeof(float_as_string), "%.2f", b);
    printf("a as string = %s\n", int_as_string);
    printf("b as string = %s\n", float_as_string);

    // string -> number
    int word_as_int = atoi(word);
    float phrase_as_float = (float)atof(phrase);
    printf("word as int        = %d\n", word_as_int);
    printf("phrase as float    = %f\n", phrase_as_float);

    printf("First char in phrase = %c\n", phrase[0]);

    // ----------------------------------------------------------------------------
    // TODO: 4.
    //   Ensure all TODOs are done.
    //   Compile and run one more time.
    //  _
    //   Then COMMIT and PUSH your work from the Unix command line:
    //      git add m3_data_types.c
    //      git commit -m "progress on m3"
    //      git push
    // -----------------------------------------------------------------------------

    printf("\n-------------------------------------\n");
    printf("\nWhat is a ghost's favorite data type?\n");
    printf("   A BOOlean!\n");

    return 0;
}

/*
Compile and run from the Unix command line:
  clang m3_data_types.c -o m3_data_types.bin
  ./m3_data_types.bin
*/
