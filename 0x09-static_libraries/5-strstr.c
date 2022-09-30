/*#include "mai.h"*/
#include <stdio.h>

/**
 * _strstr - locates substring.
 * @haystack: pointer of char type to print.
 * @needle: pointer of char type to print.
 *
 * _strstr - a function that locates a substring.
 * Return: a pointer to the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
