#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and post it to the POSIX standard output
 * @filename: a pointer to the name of file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	/* open the file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	/* read the number of bytes to buf */
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}

	/* write the read bytes from buf to stdout */
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}

	/* close the file */
	free(buf);
	close(fd);

	return (wr);
}
