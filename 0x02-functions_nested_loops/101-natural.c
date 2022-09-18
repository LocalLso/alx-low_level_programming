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
	int i, sum0, sum1, sum2, sumAll;

	sumAll = 0;
	sum0 = 0;
	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			sum2 = sum2 + i;
		}
		else if ((i % 3) == 0)
		{
			sum0 = sum0 + i;
		}
		else if ((i % 5) == 0)
		{
			sum1 = sum1 + i;
		}
		else
		{
			continue;
		}
		sumAll = sum0 + sum1 + sum2;
	}
	printf("%d\n", sumAll);
	return (0);
}
