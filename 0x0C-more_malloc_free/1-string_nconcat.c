#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* _strlen - function that calculates lenght of a string
* @str: string
* Return: the size  of the string
*/
int _strlen(char *str)
{
	int i = 0;

	while (*str++)
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - function that concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: size of the string
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, long1, newstr, long2, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	long1 = _strlen(s1); /* lenght strings*/
	long2 = _strlen(s2);
	if (n >= long2)
	{
		n = long2;
	}
	newstr = long1 + n; /*new string leght definition*/
	ptr = malloc(sizeof(char) * (newstr + 1));/*memory allocation*/
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < long1; i++) /*measuring string 1*/
	{
		ptr[i] = s1[i];/*malloc = string leght */
	}
	for (j = 0; j < n; j++)
	{
		ptr[i + j] = s2[j];/*ptr in  i+j poition = source in  pos j*/
	}

	ptr[i + j] = '\0'; /*when malloc is null return malloc*/
return (ptr);
}
