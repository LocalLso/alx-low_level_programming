#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory.
 * @b: positive integer to print.
 *
 * malloc_checked - a function that allocates memory using malloc.
 * Return: pointer or termination with status 98.
 */

void *malloc_checked(unsigned int b)
{
	char *m;

	m = malloc(sizeof(*m) * b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
