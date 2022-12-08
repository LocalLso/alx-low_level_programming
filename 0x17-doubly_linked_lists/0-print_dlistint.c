#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - prints lists elements
 * @h: const pointer to take in
 *
 * print_dlistint - prints all elements of a list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
