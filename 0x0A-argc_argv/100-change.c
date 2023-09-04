#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Writing a program that prints the mn of coins
 * to make a change for an amount
 * @argsc: The arguments number
 * @argsv: The arguments array
 *
 * Return: 0.
 */

int main(int argsc, char **argsv)
{
	int cents, mncoin = 0;

	if (argsc == 1 || argsc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argsv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		if (cents >= 10)
			cents -= 10;
		if (cents >= 5)
			cents -= 5;
		if (cents >= 2)
			cents -= 2;
		if (cents >= 1)
			cents -= 1;
		mncoin += 1;
	}
	printf("%d\n", mncoin);
	return (0);
}
