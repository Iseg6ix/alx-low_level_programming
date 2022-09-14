#include "main.h"
/**
 * jack_bauer - This function prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: 0 on successs.
 */
void jack_bauer(void)
{
	int hours = 0;
	int mins = 0;
	int hours_remainder;
	int mins_remainder;

	while (hours <= 23)
	{
		while (mins <= 59)
		{
			mins_remainder = mins % 10;
			hours_remainder = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_remainder + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins_remainder / 10 + '0');
			mins++;
			_putchar('\n');
		}
	hours++;
	mins = 0;
	}
}
