#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add new node
 * @head: pointer to pointer head
 * @n: constant integer n
 *
 * add_nodeint_end - adds a new node at the end of a list.
 * 
 * Return: pointer head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addE;
	listint_t *end;

	addE = (listint_t *)malloc(sizeof(listint_t));
	if (addE == NULL)
		return (NULL);
	addE->n = n;
	addE->next = NULL;
	end = *head;
	if (*head == NULL)
	{
		*head = addE;
	}
	else
	{
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = addE;
	}
	return (*head);
}
