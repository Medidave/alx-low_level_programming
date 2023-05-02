#include "lists.h"

/**
 * free_listint2 -a function that frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *dave;

	if (head == NULL)
		return;

	while (*head)
	{
		dave = (*head)->next;
		free(*head);
		*head = dave;
	}

	*head = NULL;
}


