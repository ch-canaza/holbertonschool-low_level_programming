#include <stdio.h>
/**
 * main - print the number of arguments passed to the program
 * @argc: count the number of arguments
 * @argv: array with the arguments of the program
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", (argc - 1));
	return (0);
}
