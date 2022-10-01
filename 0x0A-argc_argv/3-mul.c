#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: integer count to print
 * @argv: pointer of char type to print
 *
 * main - a program that multiplies two numbers.
 * Return: Always 0,
 * or 1.
 */

int main(int argc, char *argv[])
{
	int i, count, mul;

	count = 0;
	for (i = 1; i < argc; i++)
	{
		count += atoi(argv[i - 1]);
		count++;
	}
	if (count == 0)
	{
		printf("Error\n");
		return (1);
	}
	else if (count > 3)
	{
		return (0);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
