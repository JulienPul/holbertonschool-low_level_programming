#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to read
 * @letters: Number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char buffer[1024];
	size_t to_read;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	if (letters > 1024)
		to_read = 1024;
	else
		to_read = letters;

	rd = read(fd, buffer, to_read);
	if (rd == -1)
	{
		close(fd);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1 || wr != rd)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (wr);
}
