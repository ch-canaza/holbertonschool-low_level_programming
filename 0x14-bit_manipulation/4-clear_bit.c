#include "holberton.h"
#include <stdio.h>

/**
 * clear_bit - get bit value at an index
 *@n : integer to get value
 *@index: index of n
 * Return: 1 succes or -1 failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clear = 0;
	unsigned int size;

	size = sizeof(n) * 8 - 1;

	if (index > size)
		return (-1);
	clear = 1 << index;
	*n = *n & ~clear;
	return (1);
}
