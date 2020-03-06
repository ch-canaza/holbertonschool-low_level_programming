#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - create spaces and iniitialize in '\0'
 * @min: number of members
 * @max:lenght of argument
 * n: size of the string
 * Return: array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int newarr;

	if (min > max)
	{
		return (NULL);/*max should be greater*/
	}
	newarr = ((max - min) + 1);

	ptr = malloc(sizeof(int) * newarr);/*memory allocation*/
	if (ptr == NULL)
	{
		return (NULL);/*if find any null return null*/
	}

	for (i = 0; i < newarr; i++, min++) /*running ptr to know its leght*/
	{
		ptr[i] = min;
	}
return (ptr);
}
