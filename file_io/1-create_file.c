#include "main.h"
/**
 * create_file - create a file
 *
 * @filename :  name of the file.
 * @text_content : null string to write to the file
 * Return: 1 (success)  -1(failed).
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, j;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i];)
		i++;
	j = write(fd, text_content, i);
	if (close(fd) == -1 || i != j)
		return (-1);
	return (1);
}
