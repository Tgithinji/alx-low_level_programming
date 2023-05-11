#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void _cp(const char *filename1, const char *filename2);
void _close(int fd);
/**
 * main - entry point
 * @ac: argument count
 * @av: an array of command line arguments
 *
 * Return: 0 (Success)
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_toi\n");
		exit(97);
	}
	_cp(av[1], av[2]);

	return (0);
}

/**
 * _cp - copy the content of a file to another file
 * @filename1: the filename of the file containing content
 * @filename2: the filename of the file content is to be copied to
 */
void _cp(const char *filename1, const char *filename2)
{
	int fd1, fd2, wr, rd;
	char buf[1024];

	fd1 = open(filename1, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read to %s/n", filename1);
		exit(98);
	}
	fd2 = open(filename2, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		_close(fd1);
		dprintf(2, "Error: Can't write to %s\n", filename2);
		exit(99);
	}

	while ((rd = read(fd1, buf, 1024)) != 0)
	{
		if (rd == -1)
		{
			_close(fd1);
			_close(fd2);
			dprintf(2, "Error: Cant't read from file %s\n", filename1);
			exit(98);
		}
		wr = write(fd2, buf, rd);
		if (wr == -1)
		{
			_close(fd1);
			_close(fd2);
			dprintf(2, "Error: Can't write to %s\n", filename2);
			exit(99);
		}
	}
	_close(fd1);
	_close(fd2);
}

/**
 * _close - closes a file
 * @fd: the file descriptor of the file to be closed
 */
void _close(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
