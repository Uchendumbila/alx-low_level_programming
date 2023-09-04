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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
