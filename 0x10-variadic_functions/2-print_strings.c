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
	char *strings;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		strings = va_arg(ap, char *);
		if (strings != NULL)
		{
			printf("%s", strings);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(ap);
}
