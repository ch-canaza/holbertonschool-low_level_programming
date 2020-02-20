#include "holberton.h"

/**
 * _strncat - concatenate strings
 *@n: quantity of spaces
 * @dest: string that locate src
 * @src: string that is pasted in desc
 *
 * Return:dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = 0, j, k = 0;

	while (src[k] != '\0')
		k++;
	if (n > (k - 1))
		n = k;
	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
}
	return (dest);
}
