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
	int nut = n;

	if (n >= 0)
	{
		while (nut < 99)
		{
			printf("%d, \n", nut);
			nut++;
		}
	}
	else
	{
		while (nut < 99)
		{
			printf("%d, \n", nut);
			nut++;
		}
	}
}
