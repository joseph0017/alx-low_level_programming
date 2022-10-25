#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: A pointer to listint_t
 * Return: The address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a = head, *b = head;

	while (a && b && b->next)
	{
		a = a->next;
		b = b->next->next;
		if (a == b)
		{
			return (a);
		}
	}
	return (NULL);
}
