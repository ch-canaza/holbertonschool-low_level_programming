#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <elf.h>
#include <stdlib.h>
#include "holberton.h"
#include <sys/stat.h>
#include <unistd.h>

/**
 * read_textfile - check the code for Holberton School students.
 *@filename: pointer to name of the file
 *@letters: pointer to the text content
 * Return:the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, w, r;
	int *bufer = NULL;

	bufer = malloc(sizeof(char)*(letters));
	       if (!bufer)
	       {
		       free (bufer);
		       return(0);
	       }
	if (filename == NULL)
	       return (0);
	file = (open(filename, O_RDWR, 600));
	       if (file == -1)
	       {
		       return (free(bufer),0);
		}
		r = read(file, bufer, letters);
		if (r == -1)
			return (free(bufer), 0);
		
		w = write(STDOUT_FILENO, bufer, r);

		if (w == -1)
			return (free(bufer), 0);

		free(bufer);
		close(file);
		return (w);
		
}
