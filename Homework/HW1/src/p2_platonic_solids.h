#ifndef P2_PLATONIC_SOLIDS_H
#define P2_PLATONIC_SOLIDS_H

const char *platonic_name(int p, int q);
int platonic_vertices(int p, int q);
int platonic_edges(int p, int q);
int platonic_faces(int p, int q);
double platonic_area(int p, int q, double a);
double platonic_volume(int p, int q, double a, double r);

#endif
