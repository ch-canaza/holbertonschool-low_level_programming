#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)

{
	int c;
	int y;
	int w;
	int z;

	for (c = 0; c <= 9; c++)

{

	   for (y = 0; y <= 14; y++) 
	   {

		   if (y > 9 )
		   {	  w = y / 10;

		   _putchar(w + '0');
	   }
	
	z = y % 10;
	   _putchar(z + '0');
	   

	   }
_putchar('\n');

}
}

