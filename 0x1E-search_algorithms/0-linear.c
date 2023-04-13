#include "search_algos.h"

/**
 * linear_search - Calls function
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Description: Function that searches for a value in an
 * array of integers using the Linear search algorithm.
 * Return: If value not present or if array is NULL return -1,
 * else return first index where value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
