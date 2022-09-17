#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * print_number - a funtcion that prints an integer
 * Return: Always 0.
 */

void print_number(int n)
{
	if ((n / 10) != 0)
	{
		_putchar(n % 10);
	}
	else if (((n / 10) == 0) && ((n % 10) != 0) && (n > 0))
	{
		_putchar((n % 10) + '0');
	}
	else if (((n / 10) == 0) && ((n % 10) != 0) && (n <= 0))
	{
		_putchar((-n % 10) + '0');
	}
}
