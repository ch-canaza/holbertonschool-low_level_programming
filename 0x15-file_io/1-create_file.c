#include "holberton.h"

/**
 * create_file - check the code for Holberton School students.
 *@filename: pointer to name of the file
 *@text_content: 1 on succes -1 on failure
 * Return:the actual number of letters it could read and print
 */
int create_file(const char *filename, char *text_content)
{
	int file, w, i = 0;

	if (!filename)
	{
		return (-1);
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC | S_IRUSR, S_IWUSR);
	if (file == -1)
	{
		return (-1);
	}
	/*return (1);*/

	if (text_content)
	{
		while (text_content[i] != '\0')
			i++;
		w = write(file, text_content, i);

	}
	if (w == -1 || w != i)
	{
		close(file);
		return (-1);
	}

		close(file);
		return (1);

}
