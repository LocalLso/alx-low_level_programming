#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/*C program that prints alphabets in lowercase letters*/
	/*initialize*/
	char gothrough;

	/*print out characters from the initial value of gothrough*/
	for (gothrough = 'a' ; gothrough <= 'z' ; gothrough++)
	{
		putchar(gothrough);
	}

	/*prints out the newline*/
		putchar('\n');

	return (0);
}
