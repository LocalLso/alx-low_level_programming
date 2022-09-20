#include "main.h"

/**
 * print_rev - print string
 * @s: pointer of type c to print
 *
 * point_rev - a function that prints a string, in reverse, and a new line.
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;

	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
