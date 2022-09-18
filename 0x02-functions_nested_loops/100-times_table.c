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

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (j == 0)
			{
				_putchar('0');
			}
			else if ((mul >= 10))
			{
				if (mul >= 100)
					_putchar((mul / 100) + '0');
					_putchar(((mul / 10) % 10) + '0');
					_putchar((mul % 10) + '0');

				_putchar((mul  / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else if ((mul < 10) && (j != 0))
			{
				_putchar(' ');
				_putchar((mul % 10) + '0');
			}
		}
		_putchar('\n');
		}
}
