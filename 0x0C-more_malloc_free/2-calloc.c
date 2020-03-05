#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - function that concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: size of the string
 * Return: concatenated string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);/*nmemb and size must have value*/
	}

	ptr = malloc (nmemb * size);/*memory allocation*/
	if (ptr == NULL)
     	{
		return (NULL);/*if find any null return null*/
	}

	for (i = 0; i <= (nmemb * size); i++) /*running ptr to know its leght*/
		ptr[i] = '\0';
return (ptr);
}
