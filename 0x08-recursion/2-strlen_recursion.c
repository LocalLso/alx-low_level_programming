#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer of char type to print
 *
 * _strlen_recursion - a function that returns the length of a string.
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
