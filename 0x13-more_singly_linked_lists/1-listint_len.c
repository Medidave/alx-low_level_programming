#include "lists.h"

/**
 * listint_len - a function that  returns the
 * number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
		digit++;
		h = h->next;
	}

	return (digit);
}

