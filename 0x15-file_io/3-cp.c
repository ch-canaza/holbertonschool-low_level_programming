#include "holberton.h"
/**
 * main - copy content form a file to another
 * @argc: arguments counter
 * @argv: auruments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	 int fsrc, fdst, r, cl1, cl2;
	 char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	 fsrc = open(argv[1], O_RDONLY);
	if (fsrc == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdst = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((r = read(fsrc, buf, 1024)) > 0)
	{
		if (fdst == -1 || (write(fdst, buf, r) != r))
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		    exit(99);
	}
	if (r == -1)
	{	dprintf(STDERR_FILENO, "Error: can't read from %s\n", argv[2]);
		exit(98);
	}
		cl1 = close(fsrc);
		if (cl1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't close%d\n", fsrc);
			exit(100);
		}
		cl2 = close(fdst);
		if (cl2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't close%d\n", fdst);
			exit(100);
		}
		return (0);
}
}
