#include "lists.h"

/**
 * find_listint_loop - a function thatfinds the loop in a
 * @head: linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *dull = head;
	listint_t *quick = head;

	if (!head)
		return (NULL);

	while (dull && quick && quick->next)
	{
		quick = quick->next->next;
		dull = dull->next;
		if (quick == dull)
		{
			dull = head;
			while (dull != quick)
			{
				dull = dull->next;
				quick = quick->next;
			}
			return (quick);
		}
	}

	return (NULL);
}


