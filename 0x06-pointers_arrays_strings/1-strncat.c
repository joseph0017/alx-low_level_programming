#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 */

char *_strncat(char *dest, char *src, int n)
{
	int initial = 0, final = 0;

	while (dest[initial++])
		final++;

	for (initial = 0; src[initial] && initial < n; initial++)
		dest[final++] = src[initial];

	return (dest);
}
