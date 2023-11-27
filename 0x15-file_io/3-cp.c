#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - Copies the contents of a file to another file.
 *@argc: The number of arguments supplied to the program.
 *@argv: An array of pointers to the arguments.
 *
 *Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wrt;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		wrt = write(to, buf, rd);
		if (to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		rd = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);
	free(buf);
	close_file(from);
	close_file(to);
	return (0);
}
/**
 *create_buffer - Allocates 1024 bytes for a buffer.
 *@file: The name of the file buffer is storing chars for.
 *
 *Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}
/**
 *close_file - Closes file descriptors.
 *@fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
