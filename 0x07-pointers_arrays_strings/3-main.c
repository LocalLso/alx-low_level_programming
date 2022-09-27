#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * @void: empty
 *
 * main - a function that gets the length of a prefix substring.
 * Return: Always 0.
 */

int main(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
