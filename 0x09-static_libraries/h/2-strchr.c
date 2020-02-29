#include "holberton.h"

/**
 * _strchr - return a pointer to the first ocurrence of c
 * @: character located in c
 * @c: character to find in string
 * @s: string to be reviwed
 * Return: pointer if c is found  else null
 */

char *_strchr(char *s, char c)

{

	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
		return (s);
		}
	}
		if (c == '\0')

			return (s);

		s = '\0';

		return (s);


}
