#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t linked list.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: The data value for the new node.
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (h == NULL)
		return (NULL);

	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}

	newNode->n = n;

	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = *h;

		if (*h != NULL)
			(*h)->prev = newNode;

		*h = newNode;
		return (newNode);
	}

	dlistint_t *current = *h;
	unsigned int count

