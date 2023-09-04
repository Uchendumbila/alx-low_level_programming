#include "main.h"

/**
 * main - Writing a program that multiplies two numbers
 * @argc: The arguments number
 * @argv: The arguments array
 *
 * Return: 0 on success, 1 for anything else
 */

int main(int argc, char **argv)
{
	int mult;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	mult = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mult);

	return (0);
}
