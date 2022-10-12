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
	if (!f) /* if the function exist do it */
	{
		return;
	}

	f(name); /*invoque the function that prints a name */
	/*execute it */
}
