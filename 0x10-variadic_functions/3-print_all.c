#include "variadic_functions.h"
/**
 * print_chars - prints characters
 * @str_numbers: parameter
 * Return: void
 */
void print_chars(va_list str_numbers)
{
	printf("%c", va_arg(str_numbers, int));
}
/**
 * print_integers - prints integers
 * @str_numbers: parameter
 * Return: void
 */
void print_integers(va_list str_numbers)
{
	printf("%d", va_arg(str_numbers, int));
}
/**
 * print_floats - prints floats
 * @str_numbers: parameter
 * Return: void
 */
void print_floats(va_list str_numbers)
{
	printf("%f", va_arg(str_numbers, double));
}
/**
 * print_string - prints strings
 * @str_numbers: parameter
 * @str_numbers: parameter
 */
void print_string(va_list str_numbers)
{
	printf("%s", va_arg(str_numbers, char *));
}
/**
 * print_all - prints anything
 * @format: constant pointer
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j;
	va_list vadlis;

	f_t fmt_s[] = {
		{"c", print_chars},
		{"i", print_integers},
		{"f", print_floats},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(vadlis, format);

	while (format[i] != '\0' && format)
	{
		j = 0;
		while (fmt_s[j].symbol != NULL)
		{
			if (fmt_s[j].symbol[0] == format[i])
			{
				fmt_s[j].p(vadlis); /*llamada a la funcion*/
				if (fmt_s[j + 1].symbol != NULL)
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(vadlis);
}
