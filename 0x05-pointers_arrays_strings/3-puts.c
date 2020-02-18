#include<stdio.h>

/**
 *_puts - print string.
 *
 *@str: string
 *Return value
 */

void _puts(char *str)

{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
		putchar('\n');

}
