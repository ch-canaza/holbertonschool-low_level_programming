#include"holberton.h"

/**
 *_memcpy - copy n bytes from src to dest
 *@src: source memory area
 *@dest: destnie memory area
 *@n:value of area spaces to be copied
 *Return: s as a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)

		dest[i] = src[i];

	return (dest);
}
