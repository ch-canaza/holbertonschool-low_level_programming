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


		for (i = i - 1; i >= 0; i--)

			_putchar(s[i]);
		_putchar('\n');


}
