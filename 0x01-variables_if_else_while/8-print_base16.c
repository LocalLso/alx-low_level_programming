#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
/*C program that prints all numbers of base 16 in lowercase*/
	/*initialize variables*/
	int baSe16;
	char base16;

	for (baSe16 = 0 ; baSe16 <= 9 ; baSe16++)
	{
		putchar((baSe16 % 10) + '0');
	}

	for (base16 = 'a' ; base16 <= 'f' ; base16++)
	{
		putchar(base16);
	}

	putchar('\n');
	return (0);
}
