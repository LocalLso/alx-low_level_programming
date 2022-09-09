#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/*C program to print both upper and lower case alphabets*/
	/*initialize*/
	char gothrough;
	char gothrough1;

	/*print out characters from the initial value of gothrough*/
	for (gothrough = 'a' ; gothrough <= 'z' ; gothrough++)
	{
		putchar(gothrough)
	}
	for (gothrough1 = 'A' ; gothrough1 <= 'Z' ; gothrough1++)
	{
		putchar(gothrough1);
	}

	/*prints out the newline*/
	putchar('\n');

	return (0);
}
