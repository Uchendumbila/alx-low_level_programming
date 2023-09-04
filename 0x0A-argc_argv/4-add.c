#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Writing a program that adds positive numbers
 * @argsc: The arguments number
 * @argsv: The arguments array
 *
 * Return: 0.
 */
int main(int argsc, char **argsv)
{
	int i, j, sum = 0;

	for (i = 1; i < argsc; i++)
	{
		for (j = 0; argsv[i][j] != '\0'; j++)
		{
			if (!isdigit(argsv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argsv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
