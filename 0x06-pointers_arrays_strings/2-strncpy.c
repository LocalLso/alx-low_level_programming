#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer of char type to print
 * @src: pointer of char type to print
 * @n: integer to print
 *
 * _strncpy -  a function that copies a string.
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j == n)
		{
			break;
		}
		dest[j] = src[j];

	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
