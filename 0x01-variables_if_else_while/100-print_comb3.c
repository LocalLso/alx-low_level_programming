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
		putchar((d1 % 10) + '0');

		for (d2 = 1 ; d2 <= 9 ; d2++)
			putchar((d2 % 10) + '0');

		/*else if (d1 == 1)
		for (d2 = 2 ; d2 <= 9 ; d2++)
			continue;

		else if (d1 == 2)
		for (d2 = 3 ; d2 <= 9 ; d2++)
			continue;

		else if (d1 == 3)
		for (d2 = 4 ; d2 <= 9 ; d2++)
			continue;

		else if (d1 == 4)
		for (d2 = 5 ; d2 <= 9 ; d2++)
			continue;

		else if (d1 == 5)
		for (d2 = 6 ; d2 <= 9 ; d2++)
			continue;

		else if (d1 == 6)
		for (d2 = 7 ; d2 <= 9 ; d2++)
			continue;

		else if (d1 == 7)
		for (d2 = 8 ; d2 <= 9 ; d2++)
			continue;

		else if (d1 == 8)
		for (d2 = 9 ; d2 <= 9 ; d2++)
			continue;

		*/
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
