#include "holberton.h"
#include <stdio.h>

/**
 * mul - check the code for Holberton School students.
 * @a: multiplication
 * @b: multiplicacion
 * Return: Always 0.
 */

int mul(int a, int b)

{
	if (a <= 0 || b <= 0 || a >= 0 || b >= 0)

		return (1);
	else
		return (0);
}
