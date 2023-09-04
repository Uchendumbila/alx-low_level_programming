#include "main.h"

/**
 * main - Writing a program that prints its name
 * followed by a new line
 * @argsc: The arguments number
 * @argsv: The arguments array
 *
 * Return: Always 0.
 */

int main(int argsc, char **argsv[])
{
	printf("%s\n", *argsv);
	return (0);
}
