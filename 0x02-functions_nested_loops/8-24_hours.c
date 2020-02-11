#include "holberton.h"
/**
 *jack_bauer - print all hours of the day.
 *Return: nothing
 */

void jack_bauer(void)
{
	int i, j, HH, Hh, MM, Mm;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			HH = i / 10;
			Hh = i % 10;
			_putchar(HH + '0');
			_putchar(Hh + '0');
			_putchar(':');
			MM = j / 10;
			Mm = j % 10;
			_putchar(MM + '0');
			_putchar(Mm + '0');
			_putchar('\n');
		}
	}
}
