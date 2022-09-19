#include "main.h"

/**
 * puts_half - prints half of the string followed by a newline
 * @str: argument
 * Return: 0
 */

void puts_half(char *str)
{
	int i, d, y;

	i = strlen(str);

	if (i % 2 == 1)
	{
		d = i / 2 + 1;
	}
	else
	{
		d = i / 2;
	}

	for (y = d; y < i; y++)
	{
		_putchar (str[y]);
	}
	_putchar('\n');
}
