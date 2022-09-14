#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: parameter
 * Return: 98
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n >= 98; n = n - 1)
		{
			printf("%d", n);

			if (n == 98)
			{
				continue;
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
			{
				continue;
				printf(", ");
			}
		}
		printf("\n");
	}

}
