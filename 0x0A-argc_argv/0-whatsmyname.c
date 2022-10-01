#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints it's name
 * @argc: integer count to print
 * @argv: pointer of char type to print
 *
 * main - a program that prints its name, followed by a new line.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (argv[i] == argv[0])
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
