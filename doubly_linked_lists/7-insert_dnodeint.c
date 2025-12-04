#include "lists.h"
/**
 * 
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current = *h;

	if (idx == 0)
		return add_dnodeint(h, n);

	while (i < idx - 1 && current != NULL)
		current = current->next;
		i++;

	if (current == NULL)
		return (NULL);
	if (current == idx - 1)
	{
		dlistint_t *new = malloc(sizeof(dlistint_t));
		new->n = n;
	}

}
