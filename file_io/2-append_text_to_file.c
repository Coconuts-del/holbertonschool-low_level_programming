#include "main.h"
/**
 * append_text_to_file - appends text at end of a file
 *
 * @filename :  name of the file.
 * @text_content : null string to write to the file
 * Return: 1 (success)  -1(failed).
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, j = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
		j = write(fd, text_content, i);
	}
	if (close(fd) == -1 || j == -1)
		return (-1);
	return (1);
}
