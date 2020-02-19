#include "holberton.h"

/**
 * print_revvoid - print reverse
 * @s: string
 * char: string
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
		putchar('\n');

}

}
