#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * main - Entry point
 * @void: empty
 *
 * main - finds and prints the largest prime factor of the number 612852475143.
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long j = 612852475143;

	for (i = (int) sqrt(j); i > 2; i++)
	{
		if (j % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	printf("\n");
	return (0);
}
