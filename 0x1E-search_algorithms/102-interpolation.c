#include "search_algos.h"

/**
 * interpolation_search - Calls function
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Description: Function that searches for a value in an
 * array of integers using the Linear search algorithm.
 * Return: If value not present or if array is NULL return -1,
 * else return first index where value is located.
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t pos = 0;

	if (!array)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%u] = [%d]\n", (unsigned int) pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
	printf("Value checked array[%u] is out of range\n", (unsigned int) pos);
	return (-1);
}
