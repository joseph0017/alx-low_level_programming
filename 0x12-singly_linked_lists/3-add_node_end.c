#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: argument
 * @str: string to initialize
 * Return: new or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *last = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->str = strdup(str);

	if (new->str)
		while (str[i])
			i++;
	new->len = i;
	if (last)
	{
		while (last->next)
			last = last->next;
		last->next = new;
	}
	else
		*head = new;
	return (new);
}
