#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: argument
 * @f: argument
 * Return: 0
 */

void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
