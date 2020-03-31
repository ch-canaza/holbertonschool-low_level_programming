#include "holberton.h"

/**
 * append_text_to_file - check the code for Holberton School students.
 *@filename: pointer to name of the file
 *@text_content: 1 on succes -1 on failure
 * Return:1 on succes -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, app, i = 0;

	if (!filename)
	{
		return (-1);
	}

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
	{
		return (-1);
	}
	return (1);

	if (text_content)
	{
		while (text_content[i] != '\0')
			i++;
		app = write(file, text_content, i);

	}
	else
	{
		return (-1);
	}
	if (app == -1 || app != i)
	{
		close(file);
		return (-1);
	}

		close(file);
		return (1);

}
