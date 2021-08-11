#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: the text in the file
 *
 * Return: 1 0r -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wc, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[len])
		len++;
	wc = write(fd, text_content, len);
	if (wc == -1)
		return (-1);
	close(fd);
	return (1);
}
