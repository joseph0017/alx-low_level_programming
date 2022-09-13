#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints all the alphabets in lower case
 * Return: alphabets in lower case
 */

void print_alphabet(void)
{
	char alphs;

	for (alphs = 'a'; alphs <= 'z'; alphs = alphs + 1)
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
