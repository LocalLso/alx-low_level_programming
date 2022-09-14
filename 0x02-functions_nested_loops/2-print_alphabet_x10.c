#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets x10
 *
 * print_alphabet_x10 - prints alphabets in lowercase x10
 *
 */
void print_alphabet_x10(void)
{
	char gothrough;
	char x10;

	for (x10 = 0 ; x10 <= 9 ; x10++)
	{
	for (gothrough = 'a' ; gothrough <= 'z' ; gothrough++)
	{
		_putchar(gothrough);
	}
	_putchar('\n');
	}
}
