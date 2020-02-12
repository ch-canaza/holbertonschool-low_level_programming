#include <stdio.h>
#include "holberton.h"

/**
 *print_to_98 - prints all numbers from n to 98
 *@i: number received.
 *Return: nothing.
 */

void print_to_98(int i)
{
	int n;

	if (i <= 98)
	{
		for (n = i; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		for (n = i; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
