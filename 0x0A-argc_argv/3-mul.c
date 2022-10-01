#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 always succes
 */

int main(int argc, char *argv[])
{
	int a, b, multiply;

	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	multiply = a * b;

	printf("%d\n", multiply);
	return (0);
}
