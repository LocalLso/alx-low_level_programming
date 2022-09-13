#include <stdio.h>
/**
 * main - Entry point
 * C program that prints all combinations of two two digit number
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int d1, d2, d3, d4;

	for (d1 = 0 ; d1 <= 9 ; d1++)
	{
		for (d2 = 0 ; d2 <= 8 ; d2++)
		{
		for (d3 = 0 ; d3 <= 9 ; d3++)
		{
		for (d4 = 0 ; d4 <= 9 ; d4++)
		{
		if (d1 == d2 && d2 == d3 && d2 == d4 && d1 == d4)
		{
			continue;
		}
		else if ((d1 > d3 || (d2 > d4 || d1 > d3)) || (d1 == d3 && d2 == d4))
		{
			continue;
		}
			putchar((d1 % 10) + '0');
			putchar((d2 % 10) + '0');
			putchar(' ');
			putchar((d3 % 10) + '0');
			putchar((d4 % 10) + '0');
			if (d1 == 9 && d2 == 8 && d3 == 9 && d4 == 9)
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		}
		}
	}
	putchar('\n');
	return (0);
}
