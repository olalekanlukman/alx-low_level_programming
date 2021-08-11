#include "holberton.h"

/**
 * read_textfile - reads and prints file to the standard output
 * @filename: is the name of the file
 * @letters: number of lettters to be printed or read
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int amount_read, amount_write;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	amount_read = read(fd, buffer, letters);
	if (amount_read == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);

	amount_write = write(STDOUT_FILENO, buffer, amount_read);
	free(buffer);

	if (amount_read != amount_write)
		return (0);

	return (amount_write);
}
