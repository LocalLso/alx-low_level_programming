#include "main.h"

/**
 * _puts_recursion -prints a string
 * @s: a pointer of char type to print
 *
 * _puts_recursion a function that prints a string, followed by a new line.
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s + i);
}
