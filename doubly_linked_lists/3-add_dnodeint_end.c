#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: integer to be added to the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (node == NULL)
		return (NULL);

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
		temp = temp->next;

	temp->next = node;
	node->prev = temp;
	node->next = NULL;
	return (node);
}
