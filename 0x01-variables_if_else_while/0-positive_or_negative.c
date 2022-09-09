#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * more headers goes there
 * main -Entry point
 * betty style doc for function main goes there 
 */
int main(void)
{
/*C program that assigns a random number to a variable n*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
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

	return (0);
}
