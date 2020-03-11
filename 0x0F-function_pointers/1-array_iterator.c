#include <stdio.h>
#include "holberton.h"
#include "function_pointers.h"

/**
 * array_iterator - function that prints names
 * @size: pointer
 * @action: pointer to name
 * @array: array of pointers
 * Return: always zero
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	if (size <= 0 || array == NULL || action == NULL)
		return;

	while (i < size)
	{

		action(array[i++]);

	}
}
