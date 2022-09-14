#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints signs
 * @n: Charater to print
 *
 * print_sign - function that prints the sign of a number
 *
 * Return: On success 1
 * 0 On zero
 * -1 On less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
