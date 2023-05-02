#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *dave;

	while (head)
	{
		dave = head->next;
		free(head);
		head = dave;
	}
}

