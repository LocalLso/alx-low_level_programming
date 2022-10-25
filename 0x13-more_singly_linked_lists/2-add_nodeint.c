#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds new node
 * @head: head pointer
 * @n: integer n
 *
 * add_nodeint - adds a new node at the beginning of a list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addN;

	addN = (listint_t *)malloc(sizeof(listint_t));
	if (addN == NULL)
		return (NULL);
	addN->n = n;
	addN->next = NULL;

	addN->next = *head;
	*head = addN;
	free(addN);
	return (*head);
}
