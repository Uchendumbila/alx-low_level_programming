#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - Writing a fxn that creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: -1 if the fxn fails, 1 for anything else.
 */

int create_file(const char *filename, char *text_content)
{
	int den, i, swt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (swt = 0; text_content[swt];)
			swt++;
	}

	den = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(den, text_content, swt);

	if (den == -1 || i == -1)
		return (-1);

	close(den);

	return (1);
}
