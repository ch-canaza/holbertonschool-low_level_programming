#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square int matrix
 * @a: input matrix
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int pos;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			pos = (i * size) + j;
			if (i == j)
				diag1 += a[pos];

			if ((i + j) == (size - 1))
				diag2 += a[pos];
		}
	}

	printf("%d, %d\n", diag1, diag2);
}
