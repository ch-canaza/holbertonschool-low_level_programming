#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - check the code for Holberton School students.
 *
 * Return: 1 if upper and 0 otherwise.
 * @c: c upper or lower
 */
int _isupper(int c)

{
	if (c >= 65 && c <= 90)

		return (1);
	else
		return (0);
}
