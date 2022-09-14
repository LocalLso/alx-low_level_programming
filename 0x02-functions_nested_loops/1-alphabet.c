#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabets
 *
 * print_alphabet - prints alphabets in lowercase letter
 *
 */
void print_alphabet(void)
{
	char gothrough;

	for (gothrough = 'a' ; gothrough <= 'z' ; gothrough++)
	{
		_putchar(gothrough);
	}
	_putchar('\n');
}
