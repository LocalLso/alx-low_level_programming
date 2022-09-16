#include "main.h"

/**
 * print_square - prints square
 * @size: integer size
 *
 * print_sqaure -  prints a square, followed by a new line.
 * Return: Always 0.
 */

void print_square(int size)
{
	int j, i;

	j = 0;
	while (j < size)
	{
		for (i = 0; i < size; i++)
		{
			if (size > 0)
			{
				_putchar('#');
			}
			else if (size <= 0)
			{
				_putchar('\n');
			}
		}
		if (size <= 0)
		{
			_putchar('\n');
		}
	j++;
	_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
