#include "holberton.h"
/**
 *  _isalpha - print alphabet
 * @c: alphabet
 * Return: 0
 */
int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		if (c != 59)
		return (1);
	}
	return (0);


}
