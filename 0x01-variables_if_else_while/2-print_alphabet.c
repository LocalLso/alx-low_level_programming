#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/*C program that prints alphabets in lowercase letters*/
	/*setting sarting and ending points*/
	char begin = 'a';
	char end = 'z';
	char lastAlph = 'z';

	/*initiliaze gothrough with begin alphabet*/
	char gothrough = begin;

	/*print out characters from the initial value of gothrough*/
	while (gothrough != end)
	{
		putchar(gothrough);
		gothrough++;
	}

	/*prints out the last alphabet*/
		putchar(lastAlph);

	return (0);
}
