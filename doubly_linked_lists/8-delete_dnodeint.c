#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;
	dlistint_t *to_delete;

	if (*head == NULL)
		return (-1);

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	to_delete = current;

	if (to_delete->prev != NULL)
		to_delete->prev->next = to_delete->next;
	else
		*head = to_delete->next;

	if (to_delete->next != NULL)
		to_delete->next->prev = to_delete->prev;

	free(to_delete);
	return (1);
}
