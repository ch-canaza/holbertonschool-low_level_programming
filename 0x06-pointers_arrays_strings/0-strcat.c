#include "holberton.h"
/**
 *_strcat - concatenate string
 * byte nuul at the end
 * @dest: pointer to string
 * @src: concatenate origin to te dest.
 * Return: pointer
 */

char *_strcat(char *dest, char *src)

{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i]; i++)
	   dest[j++] = src[i];
	return (dest);
}
