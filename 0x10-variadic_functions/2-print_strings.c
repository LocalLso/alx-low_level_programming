#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: pointer of char type
 * @n: integer to print
 *
 * print_strings - prints strings, followed by a new line.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *strings = separator;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		strings = va_arg(ap, const char *);
		printf("%s", strings);
		if (separator == NULL)
		{
			continue;
		}
		else if (strings == NULL)
		{
			printf("0");
		}
		else if ((n - 1) == i)
		{
			continue;
		}
		else
		{
			printf("%s", separator);
		}

	}
	printf("\n");
}
