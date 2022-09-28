#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: parameter
 * Return: return value of n
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, i));
}

/**
 * is_prime - checks if it is a prime number
 * @n: argument
 * @i: argument
 * Return: return value of n
 */

int is_prime(int n, int i)
{
	if (i <= 1)
		return (1);
	else if (n % i == 0)
		return (0);
	return (is_prime(n, i - 1));
}
