#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer to be added to the new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current = *h;
	dlistint_t *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx - 1 && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (current->next == NULL)
	{
		new->next = NULL;
		new->prev = current;
		current->next = new;
		return (new);
	}
	else
	{
		new->next = current->next;
		new->prev = current;
		current->next->prev = new;
		current->next = new;
		return (new);
	}

}
