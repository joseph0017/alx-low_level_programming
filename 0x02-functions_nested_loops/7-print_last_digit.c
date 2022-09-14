#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @i: a parameter
 * Return: 0
 */

int print_last_digit(int i)
{
	int j;

	if (i < 0)
	{
		j = -1 * (i * 10);
	}
	else 
	{
		j = i % 10;
	}
	_putchar((j % 10) + 0);
	return (j % 10);
}
