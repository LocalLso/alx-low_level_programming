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
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum = i
		}
		else if ((i % 5) == 0)
		{
			sum = sum + i;
		}
		else
		{
			continue;
		}
	}
	printf("%d\n", sum);
}
