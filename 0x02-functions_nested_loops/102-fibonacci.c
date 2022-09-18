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
	int FN, FP1, FP2, i,;

	FP1 = 0;
	FP2 = 1;
	for (i = 0; i < 50; i++)
	{
		FN = FP2 + FP1;
		printf("%d, ", FN);
		FP2 = FN;
		FP1 = FP2;
	}
	printf("\n");
	return (0);
}
