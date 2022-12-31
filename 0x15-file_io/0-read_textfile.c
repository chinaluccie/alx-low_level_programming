#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of file to be read
 * @letters: number of letters to read and print
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int i, j;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		return (0);
	}

	i = read(fd, buf, letters);
	if (i == -1)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	j = write(STDOUT_FILENO, buf, i);
	if (j == -1)
	{
		return (0);
		free(buf);
	}
	free(buf);
	close(fd);

	return (j);
}
