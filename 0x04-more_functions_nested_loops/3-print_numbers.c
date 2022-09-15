#include "main.h"

/**
 * print_numbers - print numbers
 * @void: empty
 *
 * print_numbers -  prints the numbers, from 0 to 9, followed by a new line.
 * Return: Always 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar('0' + i);

	_putchar('\n');
}
