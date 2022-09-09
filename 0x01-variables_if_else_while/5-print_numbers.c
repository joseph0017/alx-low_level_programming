#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 * description: 'base 10'
 * return: numbers
 */

int main(void)
{
	int number;
	
	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}

	putchar('\n');

	return (0);
}
