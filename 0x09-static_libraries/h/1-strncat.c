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
    int i;

   for (i = 0; i <n && src[i]! = '\ 0'; i++)
        dest[i] = src[i];
    for  (; i <n; i++)
        dest[i] = '\ 0';

    return (dest);
}
