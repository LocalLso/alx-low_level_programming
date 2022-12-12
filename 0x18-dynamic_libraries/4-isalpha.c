#include <stdio.h>
#include <ctype.h>
/*#include "main.h"*/
/**
 * _isalpha - prints alphabets
 * @c: The charater to print
 *
 * _isalpha - Checks for character, lowercase, and uppercase
 *
 * Return: On success 1
 * 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else if (islower(c))
	{
		return (1);
	}
	else if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
