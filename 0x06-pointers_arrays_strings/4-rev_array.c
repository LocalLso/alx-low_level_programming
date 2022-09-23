#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: pointer of integer type to print
 * @n: integer to print
 *
 * reverse_array - reverses the content of an array of integers.
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp, j;

	j = n / 2;
	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
