#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: character to print
 * Return: returns 1 on success
 * On error, return -1 and correct error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
