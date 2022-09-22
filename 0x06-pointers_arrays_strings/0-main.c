#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @void: empty
 *
 * main - a function that concatenates two strings.
 * Return: Always 0.
 */

int main(void)
{
	char s1[98] = "Hello";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s\n", s2);
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
