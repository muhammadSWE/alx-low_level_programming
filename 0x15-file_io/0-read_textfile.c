#include "main.h"
#include <stdlib.h>
/**
 *read_textfile- Read text file print to STDOUT.
 *@filename: text file being read
 *@letters: number of letters to be read
 *
 *Return: number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file;
	ssize_t rd;
	ssize_t wrt;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	rd = read(file, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);
	free(buf);
	close(file);
	return (rd);
}
