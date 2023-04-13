#include "search_algos.h"

/**
 * binary_search - Calls function
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Description: Function that searches for a value in an
 * array of integers using the Linear search algorithm.
 * Return: If value not present or if array is NULL return -1,
 * else return first index where value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t m;

	if (!array)
		return (-1);
	while (l <= r)
	{
		print_array(array, l, r);
		m = l + (r - l) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}

/**
 * print_array - Calls function
 * @a: Array to be printed
 * @l: Left most element in array
 * @r: Right most element in array
 * Description: Helper function used to print arrays
 * during a search algorithm
 * Return: None
 */

void print_array(int *a, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i < r; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[i]);
}
