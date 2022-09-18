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
	int i, a, b, c, sumAll;

	sumAll = 0;
	a = 0;
	b = 0;
	c = 0;
	for (i = 0; i < 10; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			c = c + i;
		}
		else if ((i % 3) == 0)
		{
			a = a + i;
		}
		else if ((i % 5) == 0)
		{
			b = b + i;
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
