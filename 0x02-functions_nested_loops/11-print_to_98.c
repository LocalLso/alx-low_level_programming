#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers
 * @n: Character to print
 *
 * print_to_98 - prints all natural numbers from n to 98
 */
void print_to_98(int n)
{
	int nut;

	if (n >= 0)
	{
		for (nut = n; nut < 99; nut++)
		{
			if (nut == 98)
			{
			printf("%d\n", nut);
			continue;
			}
			else
			{
			printf("%d, ", nut);
			}
		}
	}
	else if (n > 99)
	{
		for (nut = n; nut > 98; nut--)
		{
			if (nut == 98)
			{
				printf("%d\n", nut);
				continue;
			}
			printf("%d, ", nut);
		}
	}
	else
	{
		for (nut = n; nut < 99; nut++)
		{
			if (nut == 98)
			{
				printf("%d\n", nut);
				continue;
			}
			printf("%d, ", nut);
		}
	}
}
