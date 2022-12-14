#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: character of pointer type to print
 * @f: pointer to a funtion
 *
 * print_name - a function that prints a name.
 */

void print_name(char *name, void (*f)(char *))
/* pointer to function */
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
