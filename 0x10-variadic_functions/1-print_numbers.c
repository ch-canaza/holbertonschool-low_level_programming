#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers-sum al the given args
 * const: it is a constat
 * @n: integer number
 * @...: unknown args
 * @separator: constant value
 * Return: value of the sum
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vadlis;
	unsigned int i;

	if (n == 0)
		return;
	if (separator == NULL)
		printf(" ");

	va_start(vadlis, n);

	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(vadlis, int));
		if (i < (n - 1) && separator)
			
		printf("%s", separator);
	}
	va_end(vadlis);
	{



	}
	printf("\n");
	/*return;*/
}
