#include "search_algos.h"

/**
 * rec_binary_s - recursively searched for a value using binary search
 * @array: array to search in
 * @left: starting index
 * @right: ending index
 * @value: value to search for
 *
 * Return: index of value or -1
 */

int rec_binary_s(int *array, size_t left, size_t right, int value)
{
	size_t mid = left;

	if (left > right)
		return (-1);
	printf("Searching in array: ");
	while (mid < right)
	{
		printf("%u, ", array[mid]);
		mid++;
	}
	printf("%u\n", array[mid]);

	mid = left + (right - left) / 2;

	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (rec_binary_s(array, left, mid - 1, value));
	return (rec_binary_s(array, mid + 1, right, value));
}

/**
 * binary_search - searchs for a value using binary search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: index value is at, or -1 on failure
 */

int binary_search(int *array, size_t size, int value)
{
	if (array)
	{
		return (rec_binary_s(array, 0, size - 1, value));
	}
	return (-1);
}
