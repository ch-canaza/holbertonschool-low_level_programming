#include <stdio.h>
#include "holberton.h"
#include "function_pointers.h"

/**
 * print_name - function that prints names
 * @f: pointer
 * @name: pointer to name
 * Return: always zero
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
