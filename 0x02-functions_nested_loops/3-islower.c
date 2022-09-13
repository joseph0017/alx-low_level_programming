#include "main.h"

/**
 * _islower - lower alphabets
 * Return: alphabets
 */

int _islower(int c)
{
	char j;
	int lower_alphs = 0;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j == c)
		{
			lower_alphs = 0;
		}
		else if (j != c)
		{
			lower_alphs = 1;
		}
	return (lower_alphs);
	}
}
