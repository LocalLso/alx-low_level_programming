#include "search_algos.h"

/**
 * exponential_search - Calls function
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Description: Function that searches for a value in an
 * array of integers using the Linear search algorithm.
 * Return: If value not present or if array is NULL return -1,
 * else return first index where value is located.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, hi;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int) i, array[i]);
		i = i * 2;
	}
	if (i >= size)
		hi = size - 1;
	else
		hi = i;

	printf("Value found between indexes [%lu] and [%lu]\n", i / 2, hi);
	return (binary_search_expo(array, i / 2, hi, value));
}

/**
 * binary_search_expo - Calls function
 * @array: pointer to the first element of the array
 * @value: is the value to search for
 * @l: start of array
 * @r: end of array
 * Description: Function that searches for a value in an
 * array of integers using the Linear search algorithm.
 * Return: If value not present or if array is NULL return -1,
 * else return first index where value is located.
 */

int binary_search_expo(int *array, size_t l, size_t r, int value)
{
	size_t m;

	if (r >= l)
	{
		print_array(array, l, r);
		m = l + (r - l) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			return (binary_search_expo(array, l, m - 1, value));
		return (binary_search_expo(array, m + 1, r, value));
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
