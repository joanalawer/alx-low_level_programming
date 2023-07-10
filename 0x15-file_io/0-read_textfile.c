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
	ssize_t text_file, o, w;
	char *buffer;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (text_file == NULL)
		return (0);

	file = open(text_file, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	o = read(file, text, letters);

	w = write(STDOUT_FILENO, text, o);

	close(file);

	return (w);
}
