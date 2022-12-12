/*#include "main.h"*/

/**
 * _memcpy - copies memory area.
 * @dest: pointer char type to print
 * @src: pointer char type to print
 * @n: unsigned integer to print
 *
 * _memcpy - a function that copies memory area.
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < 98; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
