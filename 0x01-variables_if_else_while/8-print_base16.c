#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)

	putchar(48 + x);
	for (x = 0; x < 6; x++)
	putchar(97 + x);
	putchar(10);
	return (0);
}
