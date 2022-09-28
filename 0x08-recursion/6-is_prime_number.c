#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: argument
 * Return: return value of n
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - checks for prime number
 * @n: argument
 * @start: argument
 * Return: return 0
 */

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
