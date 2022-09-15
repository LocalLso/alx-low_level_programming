#include "main.h"

/**
 * positive_or_negative - check for sign of a number
 * @i: Character to print
 *
 * positve_or_negative - test if integer is positive or negative
 *
 */
void positive_or_negative(int i)
{
	int n = i;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
