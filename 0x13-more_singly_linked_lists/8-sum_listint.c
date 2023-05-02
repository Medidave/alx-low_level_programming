#include "lists.h"

/**
 * sum_listint - a function that calculates the sum of all the
 * data in a listint_t list
 * @head:the head or first node in the linked list
 * Return: resulting sum of the calculation
 */

int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *dave = head;

	while (dave)
	{
		add += dave->n;
		dave = dave->next;
	}

	return (add);
}

