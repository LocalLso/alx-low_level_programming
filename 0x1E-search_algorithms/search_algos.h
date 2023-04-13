#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/* Prototypes for Mandatory Tasks */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* Prototypes for Advanced Tasks */
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

/* Helper Functions */
void print_array(int *a, size_t l, size_t r);
int binary_search_expo(int *array, size_t l, size_t r, int value);

#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif

#endif /* SEARCH_ALGOS_H */
