#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 * Return: 0.
 */
{
	int hour, int min;

	for (hour = 00; hour < 24; hour++)
	{
		for (min = 00; min < 60; min++)
			_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((min) / 10 + '0');
		_putchar((min) % 10 + '0');
		_putchar('\n');
	}
	return (0);
}
