#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: other parameters
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	int num;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i = i + 1)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator == NULL)
			continue;

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
