#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - check the code for Holberton School students.
 *
 * @c: identify a digit
 * Return: 1 if c is digit and 0 other wise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
