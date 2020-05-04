#include "holberton.h"

/**
 * _strstr - finds the first ocurrence of a substring in a string
 * @haystack: pointer to string to be searched
 * @needle: substring to be found in haystack
 *
 * Return: pointer to beginning of the located substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	char *p = 0;

	if (*needle == '\0')
		return (haystack);

	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == needle[i])
		{
			if (!i)
				p = haystack;
			if (needle[i + 1] == '\0')
				return (p);
			i++;
		}
		else
		{
			p = 0;
			i = 0;
		}
	}

	return (0);
}
