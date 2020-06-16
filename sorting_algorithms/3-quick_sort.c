#include "sort.h"

/**
 * quick_sort - Super fast and impractical sorting function
 * @array: The array to be sorted
 * @size: size of the array
 **/
void quick_sort(int *array, size_t size)
{
	int *first_idx;
	size_t last_idx;

	if (array == NULL)
		return;
	first_idx = &array[0];
	last_idx = size;
	original_quick_sort(array, size, first_idx, last_idx);
}

/**
 * original_quick_sort - Used to call the location to get subarrays
 * @array: The array (sub array of last call) to be sorted
 * @size: Size of the array variable
 * @first_idx: The whole array that is to be sorted
 * @last_idx: The full size of the array that's being sorted originally
 **/
void original_quick_sort(int *array, size_t size, int *first_idx,
		       size_t last_idx)
{
	size_t location;

	location = 0;

	if (size > 1)
	{
		location = partition(array, size, first_idx, last_idx);
		original_quick_sort(&array[0], location, first_idx, last_idx);
		original_quick_sort(&array[location], size - location, first_idx, last_idx);
	}

}

/**
 * partition - Finds where to split the array and swaps larger items right
 * and smaller items left
 * @array: Size of the array (sub array of last call) being sorted
 * @size: Size of the array variable
 * @first_idx: The whole array that was being sorted
 * @last_idx: Full size of the original array
 * Return: The index where the array should be split into two subarrays
 **/
size_t partition(int *array, size_t size, int *first_idx, size_t last_idx)
{
	int pivot;
	long i;
	long j;
	int temp;

	pivot = array[size - 1];
	i = -1;
	j = size;


	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);
		do {
			j--;
		} while (array[j] > pivot);

		if (i >= j)
		{
			return ((size_t) i);
		}
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		print_array(first_idx, last_idx);
	}
	return (j);
}
