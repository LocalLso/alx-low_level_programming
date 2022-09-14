#include "main.h"

/**
 * times_table - 9 times table
 *
 * @void: Charater empty
 * times_table - prints the 9 times table starting with 0
 */
void times_table(void)
{
	int n;
	int m;
	int mul;

	for (m = 0; m < 10; m++)
	{
	for (n = 0; n < 10; n++)
	{
		mul = m * n;
		if (mul > 9)
		{
			_putchar('0' + mul);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		else
		{
		_putchar((mul / 10) + '0');
		_putchar((mul % 10) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
	}
	_putchar('\n');
	}
}
