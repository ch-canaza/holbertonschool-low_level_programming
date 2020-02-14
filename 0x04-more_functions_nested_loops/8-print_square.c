#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 *@size: size of a square
 * Return: Always 0.
 */
void print_square(int size)
{
	int x = 0;
	int y = 0;

	if (size <= 0)
	{
		putchar('\n');
			return;
}

		for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			putchar('#');
		}
	_putchar('\n');
}
}
