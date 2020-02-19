#include "holberton.h"

/**
 * puts_half - print half o a string
 * @str: string
 */

void puts_half(char *str)

{

int i;
int j;

for (i = 0; str[i] != '\0'; i++)
{

}

i--;

j = i % 2;

i = (i - j) / 2;

for (i = i + 1; str[i] != '\0'; i++)

{

_putchar(str[i]);

}

_putchar('\n');

}
