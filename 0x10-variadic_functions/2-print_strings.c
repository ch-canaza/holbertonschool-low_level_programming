#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - sum al the given args
 * const: it is a constat
 * @n: integer number
 * @...: unknown args
 * @separator: constant string
 * Return: value of the sum
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vadlis;
	unsigned int i;
	char *p = 0;

	if (n == 0)
		return;

	va_start(vadlis, n);
	
	/**p = n;*/
	for (i = 0; i != n ; i++)
	{
		p = va_arg(vadlis, char*);

		if (p == NULL)
			printf("(nil)");
		printf("%s", p);
		if (i < (n - 1) && separator != NULL)
	{
		printf("%s", separator);
	}

	va_end(vadlis);
	}
	printf("\n");
	/*return;*/
}
