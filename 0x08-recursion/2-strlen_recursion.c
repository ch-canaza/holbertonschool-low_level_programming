#include "holberton.h"

/**
 * _strlen_recursion - function that prints a reverse string
 * @s:string to be printed
 *
 * Return: char
 */

int _strlen_recursion(char *s)

{

	if (*s)

	{

		return (_strlen_recursion(++s) + 1);

	}

	return (0);
}
