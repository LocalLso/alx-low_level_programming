#include <ctype.h>
/*#include "main.h" */

/**
 * _isupper - checks for uppercase
 * @c: integer c to print
 *
 * _isupper - checks for uppercase character
 * Return: 1 if c is uppercase
 * 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
