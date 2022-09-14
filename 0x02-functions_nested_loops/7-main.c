#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = print_last_digit(98);
	_putchar('0' + r);
	r = print_last_digit(0);
	_putchar('0' + r);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
