#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/* Prototypes for Mandatory Tasks */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* Prototypes for Advanced Tasks */
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);

/* Helper Functions */
void print_array(int *a, size_t l, size_t r);
int binary_search_expo(int *array, size_t l, size_t r, int value);

#ifndef min
#define min(a, b)            (((a) < (b)) ? (a) : (b))
#endif

#endif /* SEARCH_ALGOS_H */
