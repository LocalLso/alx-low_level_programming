#include "main.h"

/**
 * puts2 - reverses string
 * @s: pointeer of type char to print
 *
 * puts2 -  a function that reverses a string.
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
		c = s[k];
		s[k] = s[i];
		s[i] = c;
	}
}
