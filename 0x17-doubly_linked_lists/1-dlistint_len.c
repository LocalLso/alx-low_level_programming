#include "lists.h"

/**
 * dlistint_len - returns the len
 * @h: const pointer to take in
 *
 * dlistint_len - returns the num of elem in a linked dlistint_t list.
 * Return: len.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
