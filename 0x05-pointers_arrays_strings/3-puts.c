#include "main.h"

/**
 * _puts - prints a string
 * @str: char pointer to print
 *
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
