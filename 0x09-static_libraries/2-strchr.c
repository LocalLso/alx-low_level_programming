/*#include "main.h"*/
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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
