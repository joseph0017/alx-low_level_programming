#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: argument
 * @accept: argument
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[n])
			{
				break;
			}
		}
		if (!accept[n])
		{
			break;
		}
	}
	return (i);
}
