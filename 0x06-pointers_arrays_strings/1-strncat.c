#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer of char type to print
 * @src: pointer of char type to print
 * @n: integer to printer
 *
 * _strncat - a function that concatenates two strings.
 * Return: dest
 */

char *_strncat(char *dest, *src, int n)
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
