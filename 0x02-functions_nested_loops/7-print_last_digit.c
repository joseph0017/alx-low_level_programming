#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @i: a parameter
 * Return: 0
 */

int print_last_digit(int i)
{
	_putchar('0' + _abs(i % 10));
	return (_abs(i % 10));

	int last_digit;

	last_digit = (i % 10);

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
