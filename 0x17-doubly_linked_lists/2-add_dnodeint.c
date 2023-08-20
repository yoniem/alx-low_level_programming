#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: The data value for the new node. 
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
