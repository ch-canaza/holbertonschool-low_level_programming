#include "holberton.h"
/**
 * _strncat -  concatenates two strings.
 * @dest: dest.
 * @src: src.
 * @n: n.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j, l = 0;

	while (src[l] != '\0')
		l++;

	if (n > (l - 1))
		n = l;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
