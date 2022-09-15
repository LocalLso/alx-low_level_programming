#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: integer to be print
 *
 * _isdigit - checks for a digit (0 through 9)
 * Return: 1 if c is a digit
 * 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
