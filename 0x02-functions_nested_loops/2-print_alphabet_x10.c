#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet
 * Description: alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{

	for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
	_putchar('\n');
	}
}
