#include "main.h"

/**
 * factorial - factorial of a given number.
 * @n: integer to print
 *
 * factorial - a function that returns the factorial of a given number.
 * Return: ALways 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
