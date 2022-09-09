#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/*C program prints alphabets but exclude e and q in lowercase*/
	/*initialize*/
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'e')
		{
			ch = 'f';
		}
		else if (ch == 'q')
		{
			ch = 'r';
		}
		putchar(ch);
	}

	/*prints a newline*/
	putchar('\n');

	return (0);
}
