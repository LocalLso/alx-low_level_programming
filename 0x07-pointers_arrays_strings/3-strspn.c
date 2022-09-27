#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer of type char to print
 * @accept: pointer of type char to print
 *
 * _strspn - a function that gets the length of a prefix substring.
 * Return: s
 */

unsigned int _strspn(char *s,char *accept)
{
	int i;
	unsigned int length;

	length = 0;
	while (*s  != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}
			if (accept[i + 1] == '\0')
			{
				return (length);
			}
		}
		s++;
	}
	return (length);
}
