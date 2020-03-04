#include "holberton.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * _strlen - returns the length of a string.
 * @s: string input.
 * Return: length of an string.
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * *str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer should point to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2 ending with null
 * return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, size_s1, size_s2, total_size;
	char *new_arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size_s1 = _strlen(s1);
	size_s2 = _strlen(s2);
	total_size = size_s1 + size_s2;

	new_arr = malloc((total_size * sizeof(char)) + 1);
	if (new_arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size_s1 ; i++)
	{
		new_arr[i] = s1[i];
	}
	for (i = 0 ; i < size_s2 ; i++)
	{
		new_arr[size_s1 + i] = s2[i];
	}
	new_arr[total_size + 1] = '\0';
	return (new_arr);
}
