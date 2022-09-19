#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: first argument
 * @n: second argument
 * Return: 0
 */

void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		if (num != n - 1)
			printf("%d, ", a[num]);
		else
			printf("%d", a[num]);
	}
}
