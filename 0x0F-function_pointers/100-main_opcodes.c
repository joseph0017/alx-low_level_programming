#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int byte;
	int i = 0;

	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (unsigned char *)main;

	if (byte > 0)
	{
		while (i < (byte - 1))
		{
			printf("%02hhx ", ptr[i++]);
		}
		printf("%hhx\n", ptr[i]);
	}
	return (0);
}
