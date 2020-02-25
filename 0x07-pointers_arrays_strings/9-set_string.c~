#include <stdio.h>
/**
 *print_diagsums -  print diagonal sums
 *@a: original string
 *@size: size of square
 *Return: Nothing
 *character
 */
void print_diagsums(int *a, int size)
{
	int col, row;
	int acum1 = 0, acum2 = 0;

	for (col = 0; col < size; col++)
	{
		for (row = 0; row < size; row++)
		{
			if (col == row)
			{
				acum1 = acum1 + *(a + (col * size) + row);
			}
			if (col + row == size - 1)
				acum2 = acum2 + *(a + (col * size) + row);
		}
	}
	printf("%d, %d\n", acum1, acum2);
}
