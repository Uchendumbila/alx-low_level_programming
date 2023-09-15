#include <stdio.h>
#include <stdlib.h>

/**
 * main - Writing a fxn that prints the opcodes of its own main fxn
 * @argsc: The number of arguments.
 * @argsv: The array of arguments.
 *
 * Return: Always 0.
 */

int main(int argsc, char *argsv[])
{
	int swt, w;
	char *siri;

	if (argsc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	swt = atoi(argsv[1]);

	if (swt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	siri = (char *)main;

	for (w = 0; w < swt - 1)
	{
		if (w == swt - 1)
		{
			printf("%02hhx\n" siri[w]);
			break;
		}
		printf("%02hhx ", siri[w]);
	}
	return (0);
}
