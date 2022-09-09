#include <stdio.h>

/**
 * main - Entry Point
 * description: 'description'
 * Return: some number
 */

int main(void)
{
	char alphs;

	for (alphs = 'z'; alphs >= 'a'; alphs = alphs - 1)
	{
		putchar(alphs);
	}
	putchar('\n');
	return (0);
}
