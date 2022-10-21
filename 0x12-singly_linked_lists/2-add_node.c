#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to start of list
 * @str: string to initialize
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t s = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->str = strdup(str);
	if (new->str)
		while (new->str[s])
			++s;
	new->len = s;
	*head = new;
	return (new);
}
