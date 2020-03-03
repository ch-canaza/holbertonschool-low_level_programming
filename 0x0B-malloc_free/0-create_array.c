#include <stdlib.h>
#include <limits.h>
/**
 * create_array - create an array
 * @size: size of the array
 * @c: char
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(sizeof(char) * size);
	unsigned int i;

	if (p == NULL)
	{
		return (NULL);
	}
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
	else
	{
		return (NULL);
	}

	return (p);
}
