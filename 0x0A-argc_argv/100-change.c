#include "main.h"

/**
 * main - prints minimum number
 * @argc: integer to print
 * @argv: pointer of char type to print
 *
 * main - prints minimum number of coins to make change for an amount of money.
 * Return: Always 0.
 * or 1.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (argc != 1)
		{
			printf("Error\n");
			return (1);
		}
		else if (atoi(argv[1] < 0))
		{
			printf("0\n");
		}
		else 
		{
			
		}
	}
}
