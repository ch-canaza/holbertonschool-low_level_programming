#include <stdarg.h>
#include <stdio.h>
#include <variadic_functions.h"

/**
 * sum_them_all-sum al the given args
 * const: it is a constat
 * @n: integer number
 * @...: unknown args
 * Return: value of the sum
 */

int sum_them_all(unsigned const int n, ...)
{
	va_list vadlis;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(vadlis, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(vadlis, int);
	}
	va_end(vadlis);

	return (sum);
}
