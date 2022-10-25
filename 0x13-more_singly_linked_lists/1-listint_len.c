#include "lists.h"

/**
 * listint_len - returns the length
 * @h: constant pointer of listint_t type
 *
 * listint_len -  returns the number of elements in a linked list.
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *elem = NULL;

	elem = h;
	while (elem != NULL)
	{
		count++;
		elem = elem->next;
	}
	return (count);
}
