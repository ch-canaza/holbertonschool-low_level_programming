#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number and returns the same
 * @n: input int number from which is going to be get its last digit
 *
 * Return: the last number of n
 */

int print_last_digit(int n)
{
	int last;

	last = n;

	if (last >= 10)
		last  = last % 10;
	else if (last < 0 && last <= -10)
		last = last % 10;

	if (last < 0)
		last = last * -1;

	_putchar(last + '0');
	return (last);
}
