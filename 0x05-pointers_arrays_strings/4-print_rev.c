#include "main.h"

/**
 * print_rev - prints string in revers
 * @s: argument
 * Return: strings
 */

void print_rev(char *s)
{
	int j = 0;

	while (*(s + j) != '\0')
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar('\n');
}
