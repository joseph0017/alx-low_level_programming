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
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}
