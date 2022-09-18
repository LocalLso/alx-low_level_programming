#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @void: empty
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, sum, sum1, sumAll;

	sumAll = 0;
	sum = 0;
	sum1 = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum + i;
		}
		else if ((i % 5) == 0)
		{
			sum1 + i;
		}
		else
		{
			continue;
		}
		sumAll = sum + sum1;
	}
	printf("%d\n", sumAll);
	return (0);
}
