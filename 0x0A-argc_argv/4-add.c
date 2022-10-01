#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: integer count to print
 * @argv: pointer of char type to print
 *
 * main - a program that adds positive numbers.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
