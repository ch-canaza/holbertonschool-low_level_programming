#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: pointer to the array
 * @size: size of the array
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	int temp;
	int temp_i;
	int copy_idx_j;
	int changes;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		changes = 0;
		temp_i = array[i];
		for (j = i; j < size; j++)
		{
			if (temp_i > array[j])
			{
				temp_i = array[j];
				copy_idx_j = j;
				changes++;
			}
		}
		if (changes > 0)
		{
			temp = array[i];
			array[i] = temp_i;
			array[copy_idx_j] = temp;
			print_array(array, size);
		}
	}
}
