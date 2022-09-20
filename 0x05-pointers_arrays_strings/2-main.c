#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @void: empty
 *
 * main - returns the length of a string.
 * Return: Always 0.
 */

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
