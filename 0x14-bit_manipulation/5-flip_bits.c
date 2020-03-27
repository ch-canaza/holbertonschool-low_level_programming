#include "holberton.h"
/**
 * flip_bits - count the number of bits to flip to get
 * from one number to another.
 * @n: base 10 number
 * @m: base 10 number
 * Return: returns the number of bits you would need
 * to flip to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	if (n == 0 && m == 0)
		return (0);
	count += flip_bits(n >> 1, m >> 1);
	if ((n & 1) != (m & 1))
		count++;
	return (count);
}
