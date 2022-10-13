#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum
 * @n: integer to print
 *
 * sum_them_all - returns the sum of all its parameters.
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	va_start(ap, n);

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);

	}
	va_end(ap);
	return (sum);
}
