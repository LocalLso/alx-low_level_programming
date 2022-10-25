#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints elements
 * @h: constant pointer to print
 *
 * print_listint - prints all the elements of a listint_t list.
 *
 * Return: Count
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *mvptr = NULL;

	mvptr = h;
	while (mvptr != NULL)
	{
		count++;
		printf("%d\n", mvptr->n);
		mvptr = mvptr->next;
	}
	return (count);
}
