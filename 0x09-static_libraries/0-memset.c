#include "holberton.h"

/**
 * _memset -  fill a block of memory with a particular value.
 * @: unsigned int
 * @b: value constant byte
 * @n: quantity of bites to fill
 * @s: pointer to fill
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)

		s[i] = b;

	return (s);
}
