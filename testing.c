#include "header.h"
/**
 *main - get commands to execute
 *@ac: number of arguments unused
 *@ar: arguments unused
 *@envp: environment
 *Return: nothing
 */

int main(int ac, char *ar[], char *envp[])
{
	(void)envp;
	(void)ac;
	(void)ar;
	char *buffer = NULL, *av[] = {NULL};
	int pos = 0, g = 0;
	size_t size = 0;

	do {
		pos = 0;
		if (isatty(STDIN_FILENO))
			printf("#cisfun$ ");
		g = getline(&buffer, &size, stdin);
		if (!buffer)
			free(buffer);
		if (g == EOF)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			free(buffer);
			exit(0);
		}
		if (strcmp(buffer, "exit\n") == 0)
		{	free(buffer);
			exit(0);
		}
		if (strcmp(buffer, "env\n") == 0)
			print_e(envp);
		_split(buffer, av);
		if ((*buffer != '\n') && av[0])
			_exec(av);
		while (pos < 10)
		{
			pos++;
		}
	} while (1);
	free(buffer);
	free(av);
	free(envp);
	return (EXIT_SUCCESS);
}
