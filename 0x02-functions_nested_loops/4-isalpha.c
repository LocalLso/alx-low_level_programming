#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * isalpha - prints alphabets
 * @c: The charater to print
 *
 * isalpha - Checks for character
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
