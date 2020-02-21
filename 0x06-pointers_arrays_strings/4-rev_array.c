#include "holberton.h"

/**
 *reverse_array - function to reverse a array of int
 * @a:integer
 *@n:quantity of integers
 *Return :argument
 */

void reverse_array(int *a, int n)

{

	int i = 0;
	int j;
	int tmp;

	j = n - 1;

	while (i < j)
	{
	tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;

	i++;
	j--;
		}
}
