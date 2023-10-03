#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile- Writing a fxn that reads a text file and
 * prints to the POSIX STDOUT.
 * @filename: The Textfile being read
 * @letters: The number of letters to be read
 * Return: The actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *swt;
	ssize_t den;
	ssize_t i;
	ssize_t m;

	den = open(filename, O_RDONLY);
	if (den == -1)
		return (0);
	swt = malloc(sizeof(char) * letters);
	m = read(den, swt, letters);
	i = write(STDOUT_FILENO, swt, m);

	free(swt);
	close(den);
	return (i);
}
