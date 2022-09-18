#include "main.h"

/**
 * print_times_table - prints time table
 * @n: Character to print
 *
 * print_times_table - that prints the n times table, starting with 0.
 */

void print_times_table(int n)
{
	int i, j, mul;

	for (i = 0; i <= n; i++)
	{
	for (j = 0; j <= n; j++)
	{
		mul = i * j;
	if (mul == 0)
	{
		_putchar('0');
	}
	if ((mul > 0) && (mul < 10))
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar((mul % 10) + '0');
	}
	if ((mul >= 10) && (mul < 100))
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((mul / 10) + '0');
		_putchar((mul % 10) + '0');
	}
	if (mul >= 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar((mul / 100) + '0');
		_putchar(((mul / 10) % 10) + '0');
		_putchar((mul % 10) + '0');
	}
	}
	_putchar('\n');
	}
}
