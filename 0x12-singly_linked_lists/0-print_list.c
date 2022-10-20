#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints elements.
 * @h: pointer h to print
 *
 * print_list - prints all the elements of a list_t list.
 * Return: Lists
 */


size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	if (h == NULL)
	{
		printf("[0] (nil)");
	}
	list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	printf("%d", count);
}
