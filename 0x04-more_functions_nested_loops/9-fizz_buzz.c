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
	int i, j, mul3, mul5;

	for (i = 1; i < 101; i++)
	{
		for (j = 1; j < 101; j++)
		{
			mul3 = 3 * j;
			mul5 = 5 * j;

		if (i == mul3)
		{
			printf("Fizz ");
		}
		else if (i == mul5)
		{
			printf("Buzz ");
		}
		else if (i == (mul3 && mul5))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d\n", i);
		}

		}

	}
	printf("\n");
	return (0);
}
