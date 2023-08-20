#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a doubly linked list.
 * @h: Pointer to the pointer to the head of the list.
 * @idx: Index where the new node should be inserted.
 * @n: Value to be stored in the new node.
 * Return: Address of the new node, or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	current = *h;

	if (idx == 0)
	{
		new_node->next = current;
		if (current != NULL)
			current->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (i = 0; current != NULL && i < idx - 1; ++i)
		current = current->next;

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
