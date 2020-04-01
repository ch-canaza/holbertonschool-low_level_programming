#include "holberton.h"
/**
 * main - copy content form a file to another
 * @argc: arguments counter
 * @argv: auruments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char buf[1024];
	int file_from, file_to, r, w;

	if (argc != 3)
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
			exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
	exit(99);

	do {

		r = read(file_from, buf, 1024);
		w = write(file_to, buf, r);
	}
	while (r == 1024)
		if (r == -1)
		{

		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			exit(98);
		}
	if (w <= -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_to), exit(100);
	return (0);


}
