#include <stdio.h>
/**
 * main - Entry poin
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
/*C program that prints single digit numbers of base 10 using putchar*/
	/*inititialize variable*/
	int ch;

	for (ch = 0 ; ch < 10 ; ch++)
	{
		putchar((ch % 10) + '0');
	}

	putchar('\n');
	return (0);
}
