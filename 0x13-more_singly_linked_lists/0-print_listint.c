#include "lists.h"

/**
 * print_listint -a funct that  prints all the
 * elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t dave = 0;

	while (h)
	{
		printf("%d\n", h->n);
		dave++;
		h = h->next;
	}

	return (dave);
}

