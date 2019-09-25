#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *		starting from 00:00 to 23:59.
 *
 * Return: nothing.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar(hour / 10 + 48);
			_putchar(hour % 10 + 48);
			_putchar(':');
			_putchar(minute / 10 + 48);
			_putchar(minute % 10 + 48);
			_putchar('\n');
		}
	}
}
