#include "holberton.h"

/**
 * print_rev - print reverse
 * @s: pointer to a string
 * Return: int
 */

void print_rev(char *s)

{
	int i = 0;

	while (s[i] != '\0')

		i++;

	_putchar(s[i]);

	{
		int j;

		for (j = i - 1; j > 0; j--)

			_putchar(s[j]);
		_putchar('\n');

}

}
