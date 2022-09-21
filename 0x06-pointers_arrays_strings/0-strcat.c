#include "main.h"

/**
 * _strcat - function that concatenates 2 strings
 * @dest: parameter
 * @src: second parameter
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int initial = 0;

	int final = 0;

	while (dest[initial++])
		final++;
	for (intial = 0; src[initial]; initial++)
		dest[final++] = src[initial];

	return (dest);
}
