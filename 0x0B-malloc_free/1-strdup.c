#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: argument
 * Return: 0
 */

char *_strdup(char *str)
{
	int org_size;
	static char *dup;
	char *dup_offset;

	org_size = strlen(str);
	dup = (char *) malloc(sizeof(char) * org_size + 1);

	if (dup == NULL)
		return ((char *) NULL);

	dup_offset = dup;
	while (*str)
	{
		*dup_offset = *str;
		dup_offset++;
		str++;
	}
	*dup_offset = '\0';

	return (dup);

}
