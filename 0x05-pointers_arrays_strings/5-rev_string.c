#include "main.h"

/**
 * rev_string - reverses string
 * @s: pointeer of type char to print
 *
 * rev_string -  a function that reverses a string.
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i, j, k;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	;

	k = i;
	for (i--, j = 0; j < k / 2; i--, j++)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}
