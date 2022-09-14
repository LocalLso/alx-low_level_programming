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

	for (m = 0; m <= 9; m++)
	{
	for (n = 0; n <= 9; n++)
	{
		mul = m * n;
		if (n != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		if ( n == 0)
		{
			_putchar('0');
		}
		/*if (n == 9)
		{
			if (mul < 10)
			{
			_putchar('0' + mul);
			}
			else
			{
			_putchar((mul / 10) + '0');
			_putchar((mul % 10) + '0');
			}*/
		}
		else if ((mul < 10) && (n != 0))
		{
			_putchar(' ');
			_putchar('0' + (mul % 10));
		}
		else
		{
			_putchar((mul / 10) + '0');
			_putchar((mul % 10) + '0');
		}
	}
	_putchar('\n');
	}
}
