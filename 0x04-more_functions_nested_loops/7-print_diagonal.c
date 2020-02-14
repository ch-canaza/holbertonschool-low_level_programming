#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times the character \ is printed
 *
 * Return: void and the stated print
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
