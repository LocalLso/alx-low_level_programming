#include "main.h"

/**
 * jack_bauer - prints time
 * @void: Charater void
 *
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	for (k = 0; k <= 5; k++)
	{
	for (l = 0; l <= 9; l++)
	{
		if ((i == 2 && j > 3) && (k > 0 || l > 0) && (k == 0 && l == 0))
		{
			continue;
		}
		else
		{
			_putchar('0' + i);
			_putchar('0' + j);
			_putchar(':');
			_putchar('0' + k);
			_putchar('0' + l);
			_putchar('\n');
		}
	}
	}
	}
	}
}
