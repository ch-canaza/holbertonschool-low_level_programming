#include<stdio.h>

/**
 * swap_int - int a, int b.
 *
 * @a : variables
 * @b : variables
 * Return : 0
 *
 */

void swap_int(int *a, int *b)


{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;



}
