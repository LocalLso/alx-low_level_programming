#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: pointer of type char to print
 * @b: character to print
 * @n: unsigned integer to print
 *
 * _memset - a function that fills memory with a constant byte.
 * Return: s
 *
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < 98; i++)
	{
		if (i < n)
		{
			s[i] = b;
		}
	}
	return (s);
}
