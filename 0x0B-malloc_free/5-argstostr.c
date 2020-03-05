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

	while (s[i] != '\0') /*recorremos s[i]para conocer su longitud*/
		i++;
	return (i); /*retornamos la longitud*/
}
/**
  * argstostr - concats all arguments of program
  * @ac: takes in arguments
  * @av: array of arguments
  * Return: pointer to new string
  */
char *argstostr(int ac, char **av )
{
	char *nstr;

	int i, j, k, all_args = 0;

	if (ac == 0 || av == NULL) /*validacion de q args C y V contengan algo*/
		return (NULL);
	for (i = 0; i < ac; i++) /*recorremos argc*/
		all_args += _strlen(av[i]) + 1; /*asigna  los argumentos en i */
	/*medimos su longitud y le sumamos un espacio*/
	nstr = malloc(sizeof(char) * all_args + 1);/*asignamos memoria*/
	if (nstr == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			{
				nstr[k] = av[i][j]; /*asignamos agr a i y a j*/
		}
		nstr[k] = '\n'; /*asignamos salto de linea cada nstr[k]*/
	       		k++;
	}
	nstr[k] = '\0'; /*cuando nstr[k] llegue a null*/
	return (nstr);/*termina mi operacion y retorno el puntero*/
}
