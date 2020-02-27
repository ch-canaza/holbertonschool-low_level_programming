#include "holberton.h"
#include <stdio.h>
/**
 *_print_rev_recursion - command puts
 *with recursion instead of looping in reverse
 *@s: string to print
 *Return: nothing
 *
 */
void _print_rev_recursion(char *s)
{
	if (*(s + 1) != 0)
	{
		_print_rev_recursion(s + 1);
	}
	if (*s)
		_putchar(*s);
}
