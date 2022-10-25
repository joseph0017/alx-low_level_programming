#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: head
 * @index: nth node
 * Return: pointer to list node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; head; j = j + 1)
	{
		if (j == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
