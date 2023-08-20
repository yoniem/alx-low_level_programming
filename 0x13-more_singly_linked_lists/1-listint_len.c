#include "lists.h"

/**
 * listint_len - returns the numb of elements in a linked lists
 * @h: linked list of the type listint_t to traverse
 *
 * Return: numb of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

