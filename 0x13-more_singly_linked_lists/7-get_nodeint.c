#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the node at a
 *certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node in the list to return
 * Return: pointer to the node we are searching for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int eli = 0;
	listint_t *dave = head;

	while (dave && eli < index)
	{
		dave = dave->next;
		eli++;
	}

	return (dave ? dave : NULL);
}


