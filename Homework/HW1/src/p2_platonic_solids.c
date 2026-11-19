#include <stdio.h>
#include "p2_platonic_solids.h"

/**
 * Write your code for Problem 2 of Homework 1 in this file.
 *
 * Make sure to carefully read all the instructions to ensure your functions
 * meet requirements.
 *
 * Build from this src directory to use the student main with:
 *   clang p2_platonic_solids.c p2_platonic_solids_functions.c -lm -o p2_platonic_solids.bin
 *
 * Then run:
 *   ./p2_platonic_solids.bin
 */

// TODO: Implement each of the functions below according to the specifications.

int main(void) {
    // Call your functions here to test them, if desired

    // Example function call for a cube
    printf("Platonic Solid Name: %s\n", platonic_name(4, 3));

    return 0;
}
