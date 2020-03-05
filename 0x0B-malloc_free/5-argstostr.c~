#include "holberton.h"
#include <stdlib.h>
/**
  * _strlen - returns string length
  * @s: takes in string
  * Return: string length
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
  * argstostr - concats all arguments of program
  * @ac: takes in arguments
  * @av: array of arguments
  * Return: pointer to new string
  */
char *argstostr(int ac, char **av)
{
	char *nstr;

	int i, j, k, all_args = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		all_args += _strlen(av[i]) + 1;
	nstr = malloc(sizeof(char) * all_args + 1);
	if (nstr == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			nstr[k] = av[i][j];
		}
		nstr[k] = '\n';
		k++;
	}
	nstr[k] = '\0';
	return (nstr);
}
