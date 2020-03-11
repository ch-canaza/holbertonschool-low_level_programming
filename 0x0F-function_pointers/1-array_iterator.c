#include <stdio.h>
#include "holberton.h"
#include "function_pointers.h"

/**
 * array_iterator - function that prints names
 * @size: pointer
 * @action: pointer to name
 * Return: always zero
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	i = 0;

		while (i < size)
		{

		     (action) (array[i++]);

		}
}
