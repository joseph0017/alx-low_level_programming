#include <stdio.h>
/**
 * main - Entry Point
 * Description: 'inequalities'
 * Return: Always an Integer(Success)
 */

int main(void)
{
	int j, k;

	for(j = '0'; j <= '9'; j = j + 1)
	{
		for (k = '1'; k <= '9'; k = k + 1)
		{
			if(k != j)
			{
				putchar(j);
				putchar(k);
				
				if (j = '8' && k = '9')
				{
					continue
				}

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
