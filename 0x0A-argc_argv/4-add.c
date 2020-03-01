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
	int i, j, add = 0;

	if (argc != 3)
	{
		printf("0\n");
	}
    if (argc < 48 && argc > 57)
	    printf("Error\n");

    for (i = 0; i < argc; i++)
    {
	    for (j = 1; j <= i; j++)
	    {
		    if (j < i)
			    add = (atoi(argv[j])) + (atoi(argv[j + 1]));
			   printf("%d\n", add);

    }
}

    return (0);
}
