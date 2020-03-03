#include <stdio.h>
#include "holberton.h"

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		printf ("\n");
	}
	else
	{
	for (i = 0;  i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf ("#");
		}
	}
	}
	printf("\n");
}
