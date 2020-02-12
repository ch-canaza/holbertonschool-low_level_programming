#include "holberton.h"
/**
 *times_table - print all hours of the day.
 *Return: nothing
 */
void times_table(void)
{
	int i, j, k, li, la;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = (i * j);
			if (k < 10)
			{
				_putchar(k + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			/*_putchar(' ');*/
			}
			if (i * (j + 1) < 10)
				_putchar(' ');
			if (k >= 10)
			{
				li = (k / 10);
				la = (k % 10);
				_putchar(li + '0');
				_putchar(la + '0');
				if (j < 9)
				{
				    _putchar(',');
				_putchar(' ');
				}

			}

		}
		_putchar('\n');
	}

}
