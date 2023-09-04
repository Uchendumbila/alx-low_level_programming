#include "main.h"

/**
 * main - Writing a program that prints all arguments it receives.
 * All arguments should be printed, including the first one.
 * Only print one argument per line, ending with a new line.
 * @argsc: The arguments number
 * @argsv: The arguments array
 *
 * Return: Always 0.
 */

int main(int argsc, char *argsv[])
{
	int i;

	for (i = 0; i < argsc; i++)
	{
		printf("%s\n", argsv[1]);
	}
	return (0);
}
