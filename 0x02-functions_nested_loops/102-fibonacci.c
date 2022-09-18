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
	long int FN, FPO, FP1, i;

	FPO = 1;
	FP1 = 0;
	for (i = 0; i < 50; i++)
	{
		FN = FP1 + FPO;
		if (i == 49)
		{
			printf("%ld", FN);
		}
		printf("%ld, ", FN);
		FP1 = FPO;
		FPO = FN;
		FN = FP1 + FPO;
	}
	printf("\n");
	return (0);
}
