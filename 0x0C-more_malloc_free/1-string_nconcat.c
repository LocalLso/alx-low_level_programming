#include <stdlib.h>
#include "main.h"
/**
 * len - counts string lenght
 * @s: pointer of char typy to print
 *
 * Return: lenth of s2.
 */

int len(char *s)
{
	unsigned int sum;

	sum = 0;
	while (s[sum] != '\0')
		sum++;
	{
		return (sum);
	}
}


/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer of char type to print
 * @s2: pointer of char type to print
 * @n: integer to print
 *
 * string_nconcat
 * Return: Pointer
 * or NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1s2;
	unsigned int i, j, lens1, lens2;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");
	lens1 = len(s1);
	lens2 = len(s2);
	s1s2 = malloc(((sizeof(*s1s2) * lens1) + n) + 1);
		if (s1s2 == NULL)
			return (NULL);
	if (n > lens2 || n == lens2)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			s1s2[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			s1s2[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			s1s2[i] = s1[i];
		}
		for (j = 0; j < n; j++)
		{
			s1s2[i] = s2[j];
			i++;
		}
	}
	s1s2[i] = '\0';
	return (s1s2);
}
