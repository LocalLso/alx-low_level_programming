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
	int FN, FPO, FP1, i;

	FPO = 0;
	FP1 = 1;
	for (i = 0; i < 50; i++)
	{
		FN = FP1 + FPO;
		printf("%d, ", FN);
		FP1 = FPO;
		FPO = FN;
		FN = FP1 + FPO;
	}
	printf("\n");
	return (0);
}
