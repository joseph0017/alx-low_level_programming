#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 * Description: 'inequalities'
 * Return: Always an Integer(Success)
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;

	if (digit > 5)
	{
		printf("%d and is greater than 5\n", digit);
	}
	else if (digit == 0)
	{
		printf("%d and is 0 \n", digit);
	}
	else if (digit < 6)
	{
		printf("%d and is less than 6 and not 0\n", digit);
	}
	return (0);
}
