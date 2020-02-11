#include "holberton.h"

/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 *
 * Return: 0 on success and prints on stdout
 */

void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar(get_first(hours) + '0');
			_putchar(get_last(hours) + '0');
			_putchar(':');
			_putchar(get_first(minutes) + '0');
			_putchar(get_last(minutes) + '0');
			_putchar('\n');
		}
	}
}

/**
 * get_first - obtains the first digit of the input number
 * @n: input number from which the first digit is obtained
 *
 * Return: the first digit
 */

int get_first(int n)
{
	if (n < 10)
	{
		n = 0;
	}
	while (n >= 10)
	{
		n = n / 10;
	}

	return (n);
}
