#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
	{

		return (NULL);
	}
	node->str = strdup(str);
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
