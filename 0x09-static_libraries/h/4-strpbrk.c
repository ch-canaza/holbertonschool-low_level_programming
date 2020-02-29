#include "holberton.h"

/**
 *_strpbrk - finds the first character in the string s1 that match with s2
 * @s: string to be compared
 *@accept: string to match with s
 *
 *Return: return bytes accept
 *
 *
 */

char *_strpbrk(char *s, char *accept)

{
	int i;
	int j;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)

	{
		for (j = 0; accept[j] != '\0'; j++)

		{
			if (s[i] == accept[j])
			{
				s += i;

			       accept++;

				return (s);

			}

		}

	}

	if (k != 0)

		return (s);

	s = 0;

	return (s);
}
