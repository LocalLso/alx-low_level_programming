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
	int FN, FP0, FP1, i;

	FP0 = 0;
	FP1 = 1;
	for (i = 0; i < 50; i++)
	{
		FN = FP1 + FP0;
		printf("%d, ", FN);
		FP0 = FN;
		FP1 = FPO;
	}
	printf("\n");
	return (0);
}