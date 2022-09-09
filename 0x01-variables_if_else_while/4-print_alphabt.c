#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 * description: 'not e and q'
 * Return: something
 */

int main(void)
{
	char alphs, not_e, not_q;

	not_e = 'e';
	not_q = 'q';

	for (alphs = 'a'; alphs <= 'z'; alphs = alphs + 1)
	{
		if (alphs != not_e && alphs != not_q)
		{
			putchar(alphs);
		}
	}
	putchar('\n');
	return (0);
}
