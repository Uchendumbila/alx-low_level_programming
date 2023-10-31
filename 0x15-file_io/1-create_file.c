#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - Writing a fxn that creates a file.
 * @filename: The name of file to be created
 * @text_content: content in the file
 *
 * Return: 1 if true. -1 if false.
 */

int create_file(const char *filename, char *text_content)
{
	int ws;
	int swt;
	int ptr;

	if (!filename)
		return (-1);
	ws = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (ws == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (swt = 0; text_content[swt]; swt++)
		;
	ptr = write(ws, text_content, swt);
	if (ptr == -1)
		return (-1);
	close(ws);
	return (1);
}
