#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase.
 * @s: pointer of char type to print
 *
 * string_toupper - changes lowercase letters of a string to uppercase.
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			j = s[i] - 97;
			j = j + 65;
			s[i] = j;
		}
	}
	return (s);
}
