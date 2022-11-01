#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read from
 * @letters: number of letters to read and print
 * Return: reads a text file and prints it to the POSIX standard output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fr, prnt;
	char *c = (char *)malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	if (c == NULL)
		return (0);

	fr = read(fd, c, letters);
	prnt = write(STDOUT_FILENO, c, fr);

	close(fd);
	free(c);

	return (prnt);
}
