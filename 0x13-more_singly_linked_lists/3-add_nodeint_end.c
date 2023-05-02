#include "lists.h"

/**
 * add_nodeint_end -  a function that adds a new node at
 * the end of a listint_t list.
 * @head: pointer to the head or first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *dave = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (dave->next)
		dave = dave->next;

	dave->next = new_node;

	return (new_node);
}
