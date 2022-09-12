#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:  Always 0 (Success)
 */
int main(void)
{
/*C program that prints all possible different comb of two digits*/
	int d1;
	int d2;

	for (d1 = 0 ; d1 <= 8 ; d1++)
	{
		for (d2 = 1 ; d2 <= 9 ; d2++)
		{
			if (d1 == d2 || d2 == d1)
			{
				continue;
			}
			else if (d1 == d2 && d2 == d1)
			{
				continue;
			}
			else
			{
				putchar((d1 % 10) + '0');
				putchar((d2 % 10) + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
