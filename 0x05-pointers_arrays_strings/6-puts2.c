#include "main.h"

/**
 * puts2 - prints other characters followed by a new line
 * @str: argument
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;
	
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	putchar('\n');
}
