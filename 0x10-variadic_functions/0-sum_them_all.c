#include "variadic_functions.h"
/**
 * sum_them_all - add all arguments of a function
 * @n: number of arguments passed to the fucntion
 * Return: on success return sum of all arguments otherwise 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i, sum = 0;

	va_start(arguments, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, int);
	}
	va_end(arguments);
	return (sum);
}
