#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that prints names
 * @size: pointer
 * @cmp: pointer to name
 * @array: array of pointers
 * Return: always zero
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{

		if (cmp(array[i]) != 0)
			return (i);
		i++;

	}
	return (-1);
}
