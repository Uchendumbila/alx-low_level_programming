#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * read_textfile - Writing a fxn that reads a text file and prints it to
 * the POSIX stdout
 * @filename: the name of file to read
 * @letters: the number of letters it should read and print
 *
 * Return: The exact number of letters it can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ws;
	ssize_t ptr1, ptr2;
	char *swt;

	if (filename == NULL)
		return (0);
	ws = open(filename, o_RDONLY);
	if (ws == -1)
		return (0);
	swt = malloc(sizeof(char) * letters);
	if (swt == NULL)
	{
		close(ws);
		return (0);
	}
	ptr1 = read(ws, swt, letters);
	close(ws);
	if (ptr1 == -1)
	{
		free(swt);
		return (0);
	}
	ptr2 = write(STDOUT_FILENO, swt, ptr1);
	free(swt);
	if (ptr1 != ptr2)
		return (0);
	return (ptr2);
}
