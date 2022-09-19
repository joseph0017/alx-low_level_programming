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
		j++;
	}

	while (j)
	{
		_putchar(s[--j]);
	}
	_putchar('\n');
}
