#include <stdio.h>
/**
 * main - Entry point
 * A C program that prints all possible combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1, d2, d3;

	for (d1 = 0 ; d1 <= 7 ; d1++)
	{
		for (d2 = 1 ; d2 <= 8 ; d2++)
		{
			for (d3 = 2 ; d3 <= 9 ; d3++)
			{
			if (d1 == d2 && d1 == d3 && d2 == d3)
			{
				continue;
			}
			else if (d1 == d2 || d2 == d3)
			{
				continue;
			}
			else if (d1 > d2 || d1 > d3 || d2 > d3)
			{
				continue;
			}
			else
			{
				putchar((d1 % 10) + '0');
				putchar((d2 % 10) + '0');
				putchar((d3 % 10) + '0');
					if (d1 == 7 && d2 == 8 && d3 == 9)
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
