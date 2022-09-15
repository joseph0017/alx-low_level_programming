#include "main.h"

/**
 * print_square - prints square
 * @size: parameter
 * Return: size of the square
 */

void print_square(int size)
{
	int hash1;
	int hash2;

	for (hash1 = 0; hash1 < n; hash1++)
	{
		_putchar('#');

		for (hash2 = 1; hash2 < n; hash2++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
