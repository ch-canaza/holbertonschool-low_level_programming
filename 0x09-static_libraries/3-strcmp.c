#include "holberton.h"
/**
 *_strcmp - compare bytes
 * @s1: string 1
 * @s2: string 2
 * Return: diference
 *
 */

int _strcmp(char *s1, char *s2)

{
int i = 0;

for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)

if (s1[i] != s2[i])


return (s1[i] - s2[i]);
return (0);
}
