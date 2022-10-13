#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: pointer of char type
 * @n: integer n to print
 *
 * print_numbers - prints numbers, followed by a new line.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator == NULL)
		{
			continue;
		}
		else if ((i + 1) == n)
		{
			continue;
		}
		else
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
