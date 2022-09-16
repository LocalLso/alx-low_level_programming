#include <stdio.h>
#include "main.h"

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
	int k;
	long int j = 612852475143;

	for (i = 2; i < j; i++)
	{
	if ((i % 2) == 1)
	{
		k =  (j / i);
		if ((j % k) == 0)
		{
		if ((k / i) == 1)
		{
		printf("This is the largest prime factor: %d\n", k);
		}
		else
		{
		j = k;
		}
		}
		else 
		{
		continue;
		}
	}
	else 
	{
	continue;
	}
	}
	printf("\n");
	return (0);
}
