#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: integer to print
 *
 * print_triange -  prints a triangle, followed by a new line.
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
		if (j < ((size - 1) - i))
		{
		_putchar(' ');
		}
		else
		{
		_putchar('#');
		}
		}
	_putchar('\n');
	}
	if (size == 0)
	{
	_putchar('\n');
	}
}
