#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: pointer of char type to print
 * @src: pointer of char type to print
 *
 * _strcat - a function that concatenates two strings.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
