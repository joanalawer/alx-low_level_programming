#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function reads a text and prints it to
 * the POSIX standard output.
 * filename: Pointer to text file to read
 * letters: Number of letters it should read and print
 *
 * Return: 0 if filename is NULL or write fails or
 * does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, o, w;
	char *buffer;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	text_file = open(filename, O_RDONLY);

	if (text_file == -1)
	{
		free(buffer);
		return (0);
	}

	o = read(text_file, buffer, letters);

	w = write(STDOUT_FILENO, buffer, o);

	close(text_file);

	return (w);
}
