#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Function creates a file
 * @filename: Name of file to create
 * @text_content: String to write on the file
 *
 * Return: 1 on succes, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	      int r, w, len = 0;

	      if (filename == NULL)
		            return (-1);

	      if (text_content != NULL)
	      {
		            for (len = 0; text_content[len];)
			                  len++;
	      }

	      r = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
    	  w = write(r, text_content, len);

	      if (r == -1 || w == -1)
	    	return (-1);

	      close(r);

	      return (1);
}
