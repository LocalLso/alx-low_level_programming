#include "main.h"

/**
 * swap_int - swap values
 * @a: integer a to print
 * @b: integer b to print
 *
 * swap_int - function that swaps the values of two integers.
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
