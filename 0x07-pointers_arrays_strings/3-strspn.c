#include "holberton.h"

/**
 * _strspn - compare strings to find lenght
 * @: counter
 *@accept: string to be compared
 *@s: string 1
 *Return: lenght of string
 */

unsigned int _strspn(char *s, char *accept)

{
	int count = 0;
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{

		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])

			{
				count++;
				break;
			}
		}
		if (count < i)
		break;
	}
	return (count);
}
