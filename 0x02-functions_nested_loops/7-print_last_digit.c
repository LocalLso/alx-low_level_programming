#include <math.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints last digit
 *@ld: Character to print
 * print_last_digit - prints last digit of a number
 *
 * Return: Last digit
 */
int print_last_digit(int ld)
{
	int lastDig;

	lastDig = abs(ld % 10);
	_putchar('0' + lastDig);
	return (lastDig);
}
