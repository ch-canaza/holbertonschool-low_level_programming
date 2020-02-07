#include <time.h>
#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry 0 (sources)
 *
 * Return: Always 0
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
