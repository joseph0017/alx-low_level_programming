#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index
 * @head: head of a listint_t linked list
 * @index: index to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del;
	listint_t *aux = *head;

	unsigned int j;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	for (j = 0; j < index - 1; j += 1)
	{
		if (aux->next == NULL)
			return (-1);
		aux = aux->next;
	}
	del = aux->next;
	aux->next = del->next;
	free(del);
	return (1);
}
