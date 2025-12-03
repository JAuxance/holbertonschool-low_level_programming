#include "lists.h"
/**
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *temp;
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->prev = NULL;

	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (node);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = node;
	node->prev = temp;
	node->next = NULL;
}
