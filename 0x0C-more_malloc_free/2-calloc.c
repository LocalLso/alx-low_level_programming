#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: positive integer to print
 * @size: positive integer to print
 *
 * _calloc - a function that allocates memory for an array, using malloc.
 * Return: Null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(size) * nmemb);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
