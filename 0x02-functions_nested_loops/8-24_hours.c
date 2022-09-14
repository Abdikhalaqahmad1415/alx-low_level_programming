#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day, starti
 * n from 00:00 to 23:59, min loop count min, hour loop count hours
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainders;
	int mins_remainders;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	mins_remainders = minutes % 10;
	hours_remainders = hours % 10;
       	_putchar(hours / 10 + '0');
	_putchar(hours_remainders + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(mins_remainders + '0');
	minutes++;
	_putchar('\n');
	}
	hours++;
	minutes = 0;
}
}
