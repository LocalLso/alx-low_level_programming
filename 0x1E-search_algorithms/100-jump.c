#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Calls function
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Description: Function that searches for a value in an
 * array of integers using the Linear search algorithm.
 * Return: If value not present or if array is NULL return -1,
 * else return first index where value is located.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t step = sqrt(size);

	if (!array)
		return (-1);

	while (array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += step;
		if (i >= size)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - step, i);
	i -= step;
	while (array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i++;
		if (i == size)
			return (-1);
	}
	if (array[i] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		return (i);
	}
	return (-1);
}
