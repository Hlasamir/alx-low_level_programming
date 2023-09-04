#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- Read text file print STDOUT.
 * @letters: Num of letters to read.
 * @filename: Text file to read.
 * Return: w- Actual number of bytes read and, printed.
 *        0 When the function is failed or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
