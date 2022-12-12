#include <string.h>
/*#include "main.h"*/

/**
 * _strlen - length of a string
 * @s: char to be print
 *
 * _strlen - returns the length of a string.
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}
	{
		return (count);
	}
}
