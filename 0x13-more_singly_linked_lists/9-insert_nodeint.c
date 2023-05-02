#include "lists.h"

/**
 * insert_nodeint_at_index - a function that insert a
 * new node in a linked list, at a given position
 * @head: pointer to the head or  first node in the list
 * @idx: index where the new node is added in the linked list
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int eli;
	listint_t *new_node;
	listint_t *dave = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (eli = 0; dave && eli < idx; eli++)
	{
		if (eli == idx - 1)
		{
			new_node->next = dave->next;
			dave->next = new_node;
			return (new_node);
		}
		else
			dave = dave->next;
	}

	return (NULL);
}

