#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: integer count to print
 * @argv: pointer of char type to print
 *
 * main - a program that prints all arguments it receives.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
