#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int
 * @n: integer n
 *
 * reset_to_98 - takes a pointer to an int as parameter,
 * and updates the value it points to to 98
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	int m = 98;
	*n = m;
	n = &m;
}
