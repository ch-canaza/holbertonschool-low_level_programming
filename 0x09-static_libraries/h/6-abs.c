#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: input number to be computed into its absolute value
 *
 * Return: the absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;

	return (n);
}
