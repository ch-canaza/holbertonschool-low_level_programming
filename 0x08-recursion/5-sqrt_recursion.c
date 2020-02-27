#include "holberton.h"
#include <stdio.h>
int my_function(int n, int a);
/**
 *_sqrt_recursion - find the sqrt of n without using loops
 *@n: base number
 *
 *Return:  of input string
 *
 */
int _sqrt_recursion(int n)
{
	int a = 0;
	int result;

	if (n < 0)
		return (-1);
	else if (n > 0)
		result = my_function(n, a);
	else if (n == 0)
		return (0);
	return (result);
}

/**
 *my_function - find the sqrt of n without using loops
 *@n: base number
 *@a: iterator
 *Return:  of input string
 */
int my_function(int n, int a)
{
	if (a * a == n)
		return (a);
	else if (a > n)
		return (-1);
	else
		return (my_function(n, a + 1));
}
