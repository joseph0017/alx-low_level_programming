#include "main.h"
#include <stdio.h>

/**
 * print_alphabet -  alphabets
 * Return: 0 Success
 */

void print_alphabet(void)
{
	char alphs;

	for (alphs = 'a'; alphs <= 'z'; alphs++)
	{
		putchar(alphs);
	}
	putchar('\n');
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
