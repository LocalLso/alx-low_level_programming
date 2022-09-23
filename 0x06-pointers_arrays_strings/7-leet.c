#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * @s: pointer of char type to print
 *
 * leet - a function that encodes a string into 1337.
 * Return: Always 0.
 */

char *leet(char *s)
{
	char a[5] = {'4', '3', '0', '7', '1'};
	char b[5][2] = {
		{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}
	};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 4, j++)
		{
			if (s[i] == b[j][0] || s[i] == b[j][1])
			{
				s[i] = a[j];
			}
		}
	}
	return (s);
}
