#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: The data value for the new node. 
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	if (head == NULL)
		return (NULL);

	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	dlistint_t *current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = newNode;
	newNode->prev = current;

	return (newNode);
}
