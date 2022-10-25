#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of a linked list
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *del;

	int a;

	if (*head == NULL)
		return (0);

	a = (*head)->a;
	del = (*head);

	*head = (*head)->next;
	free(del);
	return (a);
}
