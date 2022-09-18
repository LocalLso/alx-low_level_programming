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
	int i, a, b, c, sum, sum1, sum2, sumAll;

	sumAll = 0;
	sum = 0;
	sum1 = 0;
	sum2 = 0;
	a = 0;
	b = 0;
	c = 0;
	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			c = sum2 + i;
		}
		else if ((i % 3) == 0)
		{
			a = sum + i;
		}
		else if ((i % 5) == 0)
		{
			b = sum1 + i;
		}
		else
		{
			continue;
		}
		sumAll = a + b + c;
	}
	printf("%d\n", sumAll);
	return (0);
}
