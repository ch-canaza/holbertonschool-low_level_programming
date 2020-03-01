#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number of arguments passed to the program
 * @argc: count the number of arguments
 * @argv: array with the arguments of the program
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	/*(void) argc;*/
	int mult = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mult = (atoi(argv[1])) * (atoi(argv[2]));
	printf("%d\n", mult);
	return (0);
}
