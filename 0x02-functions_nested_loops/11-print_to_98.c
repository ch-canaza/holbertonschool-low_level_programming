#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - writes tilll 98
 * @n: initial_number
 * Return: Nothing.
 *
 */
void print_to_98(int n)
{
	int total_count, i, contador;

	if (n > 98)
		total_count = n - 98;
	else
		total_count = 98 - n;
	contador = n;
	for (i = 0; i <= total_count; i++)
	{
		printf("%d", contador);
		if (i != total_count)
		{
			putchar(',');
			putchar(' ');
		}
		if (n > 98)
			contador--;
		else
			contador++;
	}
	putchar('\n');
}
