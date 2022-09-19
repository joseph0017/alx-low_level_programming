#include "main.h"

/**
 * rev_string - function that reverses strings
 * @s: argument
 * Return: string
 */

void rev_string(char *s)
{
	int a, b, c, tni;


	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	c = 0;
	b = a - 1;

	while (c < b)
	{
		tni = s[c];
		s[c] = s[b];
		s[b] = tni;
		c++;
		b--;
	}
}
