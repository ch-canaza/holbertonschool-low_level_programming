#include "header.h"

/**
 * print_e - printing environment
 * @arg: arguments to look for env
 * Return: nothing
 *
 */

int print_e(char **arg)

{

	int i;

	for (i = 0; arg[i] != NULL; i++)
		printf("\n%s", arg[i]);
	getchar();
	return (0);
}
