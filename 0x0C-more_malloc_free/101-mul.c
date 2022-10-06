#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two positive numbers
 * @argc: arguments
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else if
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul - num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
