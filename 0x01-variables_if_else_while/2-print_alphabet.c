#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 * description: 'alphabets'
 * Return: alphabets
 */
int main(void)
{
	char lower_alphs;

	for (lower_alphs = 'a'; lower_alphs <= 'z'; lower_alphs += 1)
	{
		putchar(lower_alphs);
		putchar('\n');
	}
	return (0);
}
