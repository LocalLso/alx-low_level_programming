#include "main.h"

/**
 * cap_string -  capitalizes all words of a string.
 * @s: pointer of type char to print
 *
 * cap_string - a function that capitalizes all words of a string.
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
		}
		if ((s[i] == 32) ||
				(s[i] == 9) ||
				(s[i] == 10) ||
				(s[i] == ',') ||
				(s[i] == ';') ||
				(s[i] == '.') ||
				(s[i] == '!') ||
				(s[i] == '?') ||
				(s[i] == '"') ||
				(s[i] == '(') ||
				(s[i] == ')') ||
				(s[i] == '{') ||
				(s[i] == '}'))
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
