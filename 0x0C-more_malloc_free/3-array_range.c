#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array
 * @min: integer to print
 * @max: integer to print
 *
 * array_range - a function that creates an array of integers.
 * Return: NULL.
 */

int *array_range(int min, int max)
{
	int *arr_rng;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}

	j = (max - min) + 1;
	arr_rng = malloc(sizeof(*arr_rng) * j);
	if (arr_rng == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		arr_rng[i] = min;
		min++;
	}
	return (arr_rng);
}
