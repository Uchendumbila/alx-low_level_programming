#include "main.h"

/**
 * main - Writing a program that prints the number of arguments
 * passed into the program, followed by a new line.
 * @argsc: The arguments number
 * @argsv: The arguments array
 *
 * Return: Always 0.
 */

int main(int argsc, char **argsv)
{
	printf("%d\n", argsc - 1);
	(void)argsv; /*Ignore argsv*/

	return (0);
}
