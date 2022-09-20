#include "main.h"

/**
 * puts_half - pritns a string
 * @str: pointeer of type char to print
 *
 * puts_half -  a function that prints half of a string, and a new line.
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
