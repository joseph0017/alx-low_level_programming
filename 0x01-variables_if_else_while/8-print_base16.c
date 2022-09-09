#include <stdio.h>

/**
 * main - Entry Point
 * Description: 'inequalities'
 * Return: Always an Integer(Success)
 */

int main(void)
{
	char hex;
	int  number;

	for (number = '0'; number <= '9'; number += 1)
	{
		putchar(number);
	}

	for (hex = 'a'; hex <= 'f'; hex += 1)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
