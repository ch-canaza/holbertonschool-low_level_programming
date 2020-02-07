#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return:always 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)

{
	putchar(48 + x);

	if (x != 9)

	{

	putchar(44);
	putchar(32);

	}

	}

	putchar(10);
	return (0);
}
