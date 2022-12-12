#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * last_digit - Entry Point
 * Description: 'inequalities'
 * Return: Always an Integer(Success)
 */

int last_digit(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;

	if (digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, digit);
	}
	else if (digit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
	return (0);
}
