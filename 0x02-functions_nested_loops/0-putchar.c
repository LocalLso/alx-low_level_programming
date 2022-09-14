#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * C program that prints _putchar
 * Return: Always 0 (Success)
 * _putchar writes character c to stdout
 * @c: is a character to print
 */
int _putchar(char c);

int main(void)
{
	char a = '_';

	_putchar(a);
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
