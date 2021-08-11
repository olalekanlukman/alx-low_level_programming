#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the filename
 * @text_content: text to be appended
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wc, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[len])
		len++;
	if (!text_content)
		return (1);
	wc = write(fd, text_content, len);
	if (wc == -1)
		return (-1);
	close(fd);
	return (1);
}
