#include <stdlib.h>
#include "main.h"

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
	char *d = (char*)malloc(size * sizeof(char));
	*d = c;
	return (d);
}
