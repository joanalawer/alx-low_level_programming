#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - copy the content of a file to another file.
 * @argc: number of arguments.
 * @argv: arguments
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{

	int text_file;
	ssize_t sz;
	char buffer[5];
	char elf[1];


	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file\n");
		exit(97);
	}

	text_file = open(argv[1], O_RDWR);
	if (text_file == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't open from file %s\n", argv[1]);
		exit(98);
	}

	sz = read(text_file, buffer, 4);
	if (sz == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	sz = lseek(text_file, 1, SEEK_SET);
	sz = read(text_file, elf, 1);
	if (elf[0] != 'E')
	{
		exit(98);
	}

	close(text_file);

	return (0);
}
