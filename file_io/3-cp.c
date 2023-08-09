#include "main.h"

/**
 * closeFic - close a file
 * @fd  : fd of the file
 * Return: 0(success) 100 (failed)
 */
int closeFic(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		return (100);
	}
	return (0);
}

/**
 * main - copy one file to another file
 * @ac  : number of arguments
 * @av  : list of arguments
 *
 * Return: 97 incorrect number of arguments
 *         98 first file does not exit or unreadbke
 *         99 can't write in second file
 *        100 close failed
 */
int main(int ac, char **av)
{
	int fd1, fd2, rd, wr;
	char buffer[1024];

	if (ac != 3)
	{   dprintf(2, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{   dprintf(2, "Error: Can't read from file %s\n", av[1]);
		return (98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{   dprintf(2, "Error: Can't write to %s\n", av[2]);
		closeFic(fd1);
		return (99);
	}

	do {
		rd = read(fd1, buffer, 1024);
		wr = write(fd2, buffer, rd);
	} while (rd == 1024);
	if (rd < 0)
	{   dprintf(2, "Error: Can't read from %s\n", av[1]);
		return (98);
	}
	if (wr < 0)
	{	dprintf(2, "Error: Can't write to %s\n", av[2]);
		return (99);
	}
	if (closeFic(fd1) !=  0  ||  closeFic(fd2) != 0)
		return (100);
	return (0);
}
