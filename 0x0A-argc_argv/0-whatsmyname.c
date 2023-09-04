#include "main.h"

/**
 * main - Writing a program that prints its name
 * followed by a new line
 * @argc: The arguments number
 * @argv: The arguments array
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	printf("%s\n", *argv);
	(void)argc;
	return (0);
}
