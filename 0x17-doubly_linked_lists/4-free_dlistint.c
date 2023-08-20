#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *nextNode;

	while (current != NULL)
	{
		nextNode = current->next;
		free(current);
		current = nextNode;
	}
}