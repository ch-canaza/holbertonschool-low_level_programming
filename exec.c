#include "header.h"

/**
 *_exec-function thatexecutes commands from stdin
 * @av: array of arguments to execute
 */
void _exec(char *av[])
{
	size_t pid = 0;
	int status = 0;

	pid = fork();
	if (pid == 0)
	{
		if (execve(av[0], av, NULL) == -1)
		{

			perror("./shell");
			exit(127);
		}
	}
	else
	{
		wait(&status);
	}
}
