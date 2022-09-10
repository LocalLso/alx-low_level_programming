#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always o (Success)
 */
int main(void)
{
/*C program that prints alphabets in reverse, in lowercase letter*/
	/*initialize variables*/
	char reverse;

	for (reverse = 'z' ; reverse <= 'a' ; reverse--)
	{
		putchar(reverse);
	}

	putchar('\n');
	return (0);
}
