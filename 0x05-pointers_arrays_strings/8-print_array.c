#include "main.h"

/**
 * print_array - prints a string
 * @a: pointeer of type char to print
 * @n: integer to print
 *
 * print_array - prints n elements of an array of integers, and a new line
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
