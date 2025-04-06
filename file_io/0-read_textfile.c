#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: Number of letters printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr, total;
	char buffer[1024];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	total = 0;
	while (letters > 0)
	{
		size_t count;

		if (letters > 1024)
			count = 1024;
		else
			count = letters;

		rd = read(fd, buffer, count);
		if (rd <= 0)
			break;

		wr = write(STDOUT_FILENO, buffer, rd);
		if (wr != rd)
		{
			close(fd);
			return (0);
		}

		letters = letters - rd;
		total = total + wr;
	}

	close(fd);
	return (total);
}
