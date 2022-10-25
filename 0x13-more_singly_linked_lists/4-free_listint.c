#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the list
 */

void free_listint(listint_t *head)
{
	listint_t *pr;

	while (head)
	{
		pr = head;
		head = head->next
		free(pr);
	}
}
