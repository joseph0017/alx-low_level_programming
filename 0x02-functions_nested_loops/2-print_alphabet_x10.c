#include "main.h"

/**
 * print_alphabet_x10 - printts all the letters of the alphabets 10x
 * Return: 10 alphabets
 */
void print_alphabet_x10(void)
{
	char alphs;
	int num;

	for (num = 1; num <= 10; num++)
	{
		for (alphs = 'a'; alphs <= 'z'; alphs++)
		{
			_putchar(alphs);
		}
		_putchar('\n');
	}
}
