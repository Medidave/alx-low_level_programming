#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a node in a
 * linked list at a certain index
 * @head: pointer to the head or first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *dave = *head;
	listint_t *ongoing = NULL;
	unsigned int eli = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(dave);
		return (1);
	}

	while (eli < index - 1)
	{
		if (!dave || !(dave->next))
			return (-1);
		dave = dave->next;
		eli++;
	}


	ongoing = dave->next;
	dave->next = ongoing->next;
	free(ongoing);

	return (1);
}
