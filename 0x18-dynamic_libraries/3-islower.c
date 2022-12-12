#include <stdio.h>
#include <ctype.h>
/*#include "main.h"*/
/**
 * _islower - prints alphabets
 * @c: The character to print
 *
 * _islower - checks for lowercase character
 *
 * Return: On success 1
 * 0 Otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
