#include "main.h"
/**
 * read_textfile - reads a texts and prints it to the POSIX standard output
 *
 * @filename : pointer to the file.
 * @letters : number of character to be read
 * Return: number of characters readed(success)  0(failed).
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rN, wN;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	rN = read(fd, buffer, letters);
	if (rN == -1)
		rN = 0;
	else
	{
		wN = write(STDOUT_FILENO, buffer, rN);
		if (wN == -1)
			rN = 0;
	}
	free(buffer);
	close(fd);
	return (rN);
}
