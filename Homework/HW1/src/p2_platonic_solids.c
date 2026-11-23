/**
 * Write your code for Problem 2 of Homework 1 in this file.
 *
 * Make sure to carefully read all the instructions to ensure your functions
 * meet requirements.
 *
 * Build and run from this directory with:
 *   clang p2_platonic_solids.c -lm -o p2_platonic_solids.bin
 *   ./p2_platonic_solids.bin
 *
 * Unit tests live in p2.lua; run them from this directory with:
 *   edu_unit p2.lua
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// TODO: Implement each of the functions below according to the specifications.

const char *platonic_name(int p, int q) {
    /**
     * Returns the name of a Platonic solid given its properties.
     * p is the number of sides on each face, and q is the number of faces that
     * meet at each vertex.
     *
     * Example: For p = 4 and q = 3, this function returns "cube".
     */
    if (p == 3 && q == 3) {
        return "tetrahedron";
    } else if (p == 4 && q == 3) {
        return "cube";
    } else if (p == 3 && q == 4) {
        return "octahedron";
    } else if (p == 5 && q == 3) {
        return "dodecahedron";
    } else if (p == 3 && q == 5) {
        return "icosahedron";
    }

    fprintf(stderr,
            "Arguments given to platonic_name() do not describe a valid Platonic solid\n");
    exit(EXIT_FAILURE);
}

int platonic_vertices(int p, int q) {
    /**
     * Returns the number of vertices in a Platonic solid given its properties.
     * p is the number of sides on each face, and q is the number of faces that
     * meet at each vertex.
     *
     * Example: For p = 4 and q = 3, this function returns 8.
     */
    return 0;
}

int platonic_edges(int p, int q) {
    /**
     * Returns the number of edges in a Platonic solid given its properties.
     * p is the number of sides on each face, and q is the number of faces that
     * meet at each vertex.
     *
     * Example: For p = 4 and q = 3, this function returns 12.
     */
    return 0;
}

int platonic_faces(int p, int q) {
    /**
     * Returns the number of faces in a Platonic solid given its properties.
     * p is the number of sides on each face, and q is the number of faces that
     * meet at each vertex.
     *
     * Example: For p = 4 and q = 3, this function returns 6.
     */
    return 0;
}

double platonic_area(int p, int q, double a) {
    /**
     * Returns the surface area of a Platonic solid given its properties.
     * p is the number of sides on each face, q is the number of faces that
     * meet at each vertex, and a is the length of each edge.
     *
     * Example: For p = 4, q = 3, and a = 2, this function returns 24.
     */
    return 0.0;
}

double platonic_volume(int p, int q, double a, double r) {
    /**
     * Returns the volume of a Platonic solid given its properties.
     * p is the number of sides on each face, q is the number of faces that
     * meet at each vertex, a is the length of each edge, and r is the inradius
     * of the polyhedron.
     *
     * Example: For p = 4, q = 3, and r = 1, this function returns 8.
     */
    return 0.0;
}

int main(void) {
    // Call your functions here to test them, if desired

    // Example function call for a cube
    printf("Platonic Solid Name: %s\n", platonic_name(4, 3));

    return 0;
}
