#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - Writing a fxn that appends text at the end of a file
 * @filename: The name of file
 * @text_content: added content
 *
 * Return: 1 if the file exists. -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ws;
	int swt;
	int ptr;

	if (!filename)
		return (-1);
	ws = open(filename, O_WRONLY | O_APPEND);
	if (ws == -1)
		return (-1);
	if (text_content)
	{
		for (swt = 0; text_content[swt]; swt++)
			;
		ptr = write(ws, text_content, swt);
		if (ptr == -1)
			return (-1);
	}
	close(ws);
	return (1);
}
