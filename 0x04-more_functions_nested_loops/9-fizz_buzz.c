#include "holberton.h"
#include <stdio.h>

/**
 * main - prints from 1 to 100. Trunc multiples of 3 for Fizz, 5 for buzz
 *
 * Return: 0 on success and the stated ptinr
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
