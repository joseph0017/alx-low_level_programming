#include "lists.h"

/**
 * sum_dlistint -  returns the sum of a dlistint_t linked list
 * @head: The pointer to head of the list
 * Return: The sum of all elements in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
