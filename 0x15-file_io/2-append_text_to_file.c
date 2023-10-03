#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - Writing a fxn that appends a text
 * at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: -1 if the fxn fails, -1 if file does not exist, 1 for anything else
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, m, swt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (swt = 0; text_content[swt];)
			swt++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	m = write(i, text_content, swt);

	if (i == -1 || m == -1)
		return (-1);

	close(i);

	return (1);
}
