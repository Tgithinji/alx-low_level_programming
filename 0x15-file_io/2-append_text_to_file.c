#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text to file
 * @filename: name of the file
 * @text_content: NULL terminated string
 *
 * Return: 1 on success -1 on faiure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	/* open file */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* length of the string */
	len = 0;
	while (*(text_content + len) != '\0')
	{
		len++;
	}

	/* append the string at the end of file */
	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);

	/* close file */
	close(fd);
	return (1);
}

