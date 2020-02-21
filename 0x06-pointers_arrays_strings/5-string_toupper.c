#include "holberton.h"

/**
 *string_toupper - convert lower to upper
 *@p: characters of the string to be changed
 * Return:p as value of upper
 */

char *string_toupper(char *p)

{
	int i = 0;
	int j = 0;

	while (p[i] != '\0')
		i++;
	for (j = 0 ; j < i; j++)
	{
		if ((p[j] >= 97) && (p[j] <= 122))
			p[j] = p[j] - 32;
	}
			return (p);
}
