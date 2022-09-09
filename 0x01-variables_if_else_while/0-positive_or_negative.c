#include <stdio.h>
#include <stdlib.h>

#include <time.h>

/**
 * main - Entry Point
 *
 * Description: 'to print positive, negative values at random'
 *
 * Return: return n
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand()  - RAND_MAX / 2;
	printf("%d \n", n);

	if (n > 0)
	{
		printf("The number is positive \n");
	}

	else if (n < 0)
	{
		printf("The number is negative \n");
	}

	else
	{
		printf("The number is zero \n");
	}

	return (0);
}
