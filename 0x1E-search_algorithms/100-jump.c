#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array of
 *  integers using theJump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: -1 if no value or array is NULL
 * otherwise the index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, steps;

	if (array == NULL || size == 0)
		return (-1);

	steps = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += steps;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	if (jump < size - 1)
	{
		jump = jump;
	}
	jump = size - 1;

	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
