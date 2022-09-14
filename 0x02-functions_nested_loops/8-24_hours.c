#include "main.h"

/**
 * 8-24_hours.c - 24
 * Return: jack bauer
 */

void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;
	int hrs_left;
	int mins_left;

	while (hrs <= 23)
	{
		while (mins <= 59)
		{
			mins_left = mins % 10;
			hrs_left = hrs % 10;
			_putchar(hrs / 10 + '0');
			_putchar(hrs_left + '0');
			_putchar(':');
			_putchar(mins /10 + '0');
			_putchar(mins_left + '0');
			mins++;
			_putchar('\n');
		}
		hrs++;
		mins = 0;
	}
}
