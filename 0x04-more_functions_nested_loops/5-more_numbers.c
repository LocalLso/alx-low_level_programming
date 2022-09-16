#include "main.h"

/**
 * more_numbers - prints numbers
 * @void: empty
 *
 * more_numbers -  10 times the numbers, from 0 to 14, and a new line.
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i, j;

	j = 0;
	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
			_putchar((i / 10) + '0');
			}
		_putchar((i % 10) + '0');
		}
	j++;
	_putchar('\n');
	}
}
