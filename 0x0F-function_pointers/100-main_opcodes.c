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

	byte = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

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
			printf("%02hhu ", ptr[i++]);
		}
		printf("%hhu\n", ptr[i]);
	}
	return (0);


}
