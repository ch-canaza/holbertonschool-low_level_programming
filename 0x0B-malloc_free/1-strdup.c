#include <stdlib.h>
/**
 * _strdup - returns a duplicate of the string str..
 * @str: pointer.
 * Return: pointer.
 */
char *_strdup(char *str)
{
	int i = 0, j = 0; /*set variables*/
	char *p;   /* set  point*/

	if (str == NULL)
		return (NULL);

	while (str[i]) /* measuring str*/
		i++;

	p = malloc(sizeof(char) * (i + 1)); /* setting memory*/

	if (p == NULL)
		return (NULL);

	while (j < i)
	{
		p[j] = str[j]; /* set copy*/
		j++;
	}
	p[j] = '\0'; /* when finish return point*/
	return (p);
}
