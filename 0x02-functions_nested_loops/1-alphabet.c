#include "main.h"

/**
 * print_alphabet -  alphabets
 * Return: 0 Success
 */

void print_alphabet(void)
{
	char alphs;

	for (alphs = 'a'; alphs <= 'z'; alphs++)
	{
		_putchar(alphs);
	}
	_putchar('\n');
}

/**
 * main - entry
 * Return: lower alphabets
 */

int main(void)
{
	print_alphabet();

	return (0);
}
