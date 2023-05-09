#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function to read text file and  print to STDOUT.
 * @filename: this the text file being read
 * @letters: the number of letters to be read
 * Return: w- actual number of the  bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}
