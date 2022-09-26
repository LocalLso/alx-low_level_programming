#include "main.h"
#include <stddef.h>

/**
 * _strchr - that copies memory area.
 * @s: pointer of char type to print
 * @c: a character to print
 *
 * _strchr - a function that locates a character in a string.
 * Return: s,
 * or NULL.
 */

char *_strchr(char *s, char c)
{
	int i;
	char *firstOcc = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			firstOcc = &s[i];
			return (firstOcc);
		}
	}
	return (firstOcc);
}
