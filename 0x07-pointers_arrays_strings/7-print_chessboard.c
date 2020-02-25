#include "holberton.h"
/**
 *print_chessboard -  search characters in dest array
 *@a: original string
 *Return: Nothing
 *character
 */
void print_chessboard(char (*a)[8])
{
	unsigned int col, row;

	for (col = 0; col < 8; col++)
	{
		for (row = 0; row < 8; row++)
		{
			_putchar(a[col][row]);
		}
		_putchar('\n');
	}
}
