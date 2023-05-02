#include "lists.h"

/**
 * free_listint_safe - a function that frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	int different;
	listint_t *dave;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		different = *h - (*h)->next;
		if (different > 0)
		{
			dave = (*h)->next;
			free(*h);
			*h = dave;
			lenght++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenght++;
			break;
		}
	}

	*h = NULL;

	return (lenght);
}

