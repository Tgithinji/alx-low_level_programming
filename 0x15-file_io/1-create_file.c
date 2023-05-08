#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a File
 * @filename: pointer to the name of the file
 * @text_content: string to write t`o the file
 *
 * Return: 1 on success. -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	if (filename == NULL)
		return (-1);

	/* create and open file */
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* find length of text content */
	len = 0;
	while (*(text_content + len) != '\0')
	{
		len++;
	}

	/* write to the file */
	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);

	return (1);
}
