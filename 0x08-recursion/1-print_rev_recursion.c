#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: argument
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s > 0)
	{
		_puts_recursion(s = s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
