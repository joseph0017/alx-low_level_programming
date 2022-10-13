#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * @...: Other parameters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int sum = 0;
	int i;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i = i + 1)
	{
		sum += va_arg(args, n);
	}
	va_end(args);

	return (sum);
}
