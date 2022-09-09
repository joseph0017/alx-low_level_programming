#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 * description: 'alphabets'
 * Return: alphabets success(0)
 */

int main(void)
{
	char alphs;

	for (alphs = 'a'; alphs <= 'z'; alphs = alphs + 1)
	{
		putchar(alphs);
	}

	for (alphs = 'A'; alphs <= 'Z'; alphs = alphs + 1)
	{
		putchar(alphs);
	}

	putchars('\n');
	return (0);
}
