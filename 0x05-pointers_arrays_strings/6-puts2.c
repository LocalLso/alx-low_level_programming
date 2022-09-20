#include "main.h"

/**
 * puts2 - reverses string
 * @str: pointeer of type char to print
 *
 * puts2 -  a function that reverses a string.
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if ((i % 2) == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
