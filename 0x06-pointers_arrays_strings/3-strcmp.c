#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: left string
 * @s2: right string
 * Return: 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int val = 0;

	while (s1 = '\0' && s2 = '\0')
	{
		if(s1 != s2)
		{
			val = 1;
		}
		s1 = s1 + 1;
		s2 = s2 + 1;

	}

	if (val == 0)
		return (0);
	else 
		return 1;
}
