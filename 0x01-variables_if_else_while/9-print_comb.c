#include <stdio.h>

/**
 * main - Entry Point
 * Description: 'inequalities'
 * Return: Always an Integer(Success)
 */

int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers = numbers + 1)
	{
		putchar(numbers);
		if (numbers < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
