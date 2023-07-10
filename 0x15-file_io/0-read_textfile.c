#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function reads a text and prints it to
 * the POSIX standard output.
 * @filename: Pointer to text file to read
 * @letters: Number of letters it should read and print
 *
 * Return: 0 if filename is NULL or write fails or
 * does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w;
	int text_file;
	char *buffer;

	text_file = open(filename, O_RDONLY);

	if (text_file == -1)
	{
		return (0);
	}
	
	buffer = malloc(sizeof(char) * (letters));

        if (!buffer)
        {
                return (0);
        }

        if (!filename)
        {
                return (0);
        }

	r = read(text_file, buffer, letters);

	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(text_file);

	return (w);
}
