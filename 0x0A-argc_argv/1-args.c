#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments
 * @argc: integer count to print
 * @argv: pointer of char type to print
 *
 * main - a program that prints the number of arguments passed into it.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, count;

	count = 0;
	for (i = 1; i < argc; i++)
	{
		count += atoi(argv[i - 1]);
		count++;
	}
	printf("%d\n", count);
	return (0);
}
