#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: pointer to the head or first element in the linked list
 * Return: the value of the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *dave;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	dave = (*head)->next;
	free(*head);
	*head = dave;
	return (number);
}

