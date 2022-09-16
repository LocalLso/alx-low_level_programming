#include "main.h"

/**
 * print_diagonal - pritns a line
 * @n: integer n to print
 *
 * print_diagonal -  draws a diagonal line on the terminal.
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (n > 0)
		{
			_putchar('\\');
			_putchar('\n');
			_putchar('\t');
		}
		else
		{
			_putchar('\n');
		}
	i++;
	}
	_putchar('\n');
}