#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *  @min: parameter
 *  @max: parameter
 *  Return: returns a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i = 0, j = 0, c = 0;
	int *array;

	if (min > max)
		return (NULL);

	c = max - min + 1;
	array = malloc(sizeof(int) * c);

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++, j++)
		array[j] = i;

	return (array);
}
