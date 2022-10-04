#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * create_array - creates array of chars
 * @size: integer to print
 * @c: char to print
 *
 * create_array - creates an array of chars, and init it with a specific char.
 * Return: NULL
 * or pointer.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	{
	char *d = (char *)malloc(size * sizeof(char));
		if (size == 0 || d == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			*(d + i) = c;
		}
	return (d);
	}
}
