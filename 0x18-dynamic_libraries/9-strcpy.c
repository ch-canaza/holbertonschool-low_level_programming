#include <stdio.h>
/**
 *_strcpy - copies one string to another
 *@dest: destiny folder to copy the string
 *@src: source string being copy
 *
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, data_size = 0;

	while (*(src + data_size) != 0)
	{
		data_size++;
	}
	for (i = 0; i <= data_size; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
