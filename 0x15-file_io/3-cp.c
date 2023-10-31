#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_file - Writing a fxn that checks if files can be opened.
 * @file_from: file checking from
 * @file_to: file checking to
 * @argv: arguments vector
 *
 * Return: nothing
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Writing a fxn that check code for Holberton School students.
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int from, to, oprr;
	ssize_t charr, ptr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp from to");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(from, to, argv);

	charr = 1024;
	while (charr == 1024)
	{
		charr = read(from, buf, 1024);
		if (charr == -1)
			error_file(-1, 0, argv);
		ptr = write(to, buf, charr);
		if (ptr == -1)
			error_file(0, -1, argv);
	}

	oprr = close(from);
	if (oprr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}

	oprr = close(to);
	if (oprr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	return (0);
}
