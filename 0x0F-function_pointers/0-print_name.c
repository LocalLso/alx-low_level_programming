#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: character of pointer type to print
 * @f: pointer to a funtion
 *
 * print_name - a function that prints a name.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	void (*ff)(char *);
	
	ff = f;
	if (!ff)
	{
		return;
	}

	ff(name);
}
