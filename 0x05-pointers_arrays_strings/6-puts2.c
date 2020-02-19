#include "holberton.h"

/**
 *puts2 - print every single character in a string
 *@str: string stored
 *
 */

void puts2(char *str)

{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)

			_putchar(str[i]);
	}
_putchar('\n');

}
