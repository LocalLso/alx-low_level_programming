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
	for (gothrough = 'A' ; gothrough <= 'Z' ; gothrough++)
	{
		for (gothrough1 = 'a' ; gothrough1 <= 'z' ; gothrough1++)
		{
			putchar(gothrough1);
			putchar(gothrough);
		}
	}

	/*prints out the newline*/
	putchar('\n');

	return (0);
}
