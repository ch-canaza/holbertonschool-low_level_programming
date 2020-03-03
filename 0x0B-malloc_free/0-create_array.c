#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * create_array - creates an array of chars, and initializes it with * a specific char
 * @size: size of array
 * @c: specific character
 *
 * return: zero
 *
 */

char *create_array(unsigned int size, char c)
{

	char * p = malloc (sizeof(char) * size);

	unsigned int i;

	if (p == NULL)
	{
		return (NULL);
	}
	if (size > 0)
	{

	for (i = 0; i <= size; i++)
		{
			p[i] = c;

		 }
	}
	else
	{
		return (NULL);
	}
	return(p);
}
