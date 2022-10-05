#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *_strlen - finds the length of the string
 * @s: pointer of char type to print
 *
 *_strlen _ finds the length of a given string
 *Return: length.
 */

int _strlen(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}


/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer of char type to print
 *
 * _strdup -  returns a pointer to a newly allocated space in memory.
 * Return: NULL
 * or a pointer.
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int size;
	char *d;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str);
	d = (char *)malloc((size + 1) * sizeof(char));
	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(d + i) = *(str + i);
	}
	*(d + i) = '\0';
	return (d);
}
