#include "main.h"

/**
 * print_sign - prints sign
 * @n: argument used for check
 * Return: 0 success always
 */

int print_sign(int n)
{
	int num;

	if (n > 0)
	{
		_putchar('+');
		num = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		num = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		num = -1;
	}

	return (num);
}
