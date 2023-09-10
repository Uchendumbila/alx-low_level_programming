#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

/**
 * is_digit - Writing a fxn that checks if a string contains a non-digit char
 * @s: Evaluating string
 *
 * Return: 0 for non-digit, 1 for anything else
 */

int is_digit(char *s)
{
	int y = 0;

	while (s[y])
	{
		if (s[y] < '0' || s[y] > '9')
			return (0);
		y++;
	}
	return (1);
}

/**
 * _strlen - Writing a fxn that returns the len of a string
 * @s: The evaluating string
 *
 * Return: The len of the str
 */

int _strlen(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	return (y);
}

/**
 * errors - Writing a fxn that handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Writing a fxn that multiplies two positive numbers.
 * @argsc: The arg number
 * @argsv: The arg vector
 *
 * Return: Always 0.
 */

int main(int argsc, char **argsv)
{
	char *p11, *p22;
	int i, swt, rrr, lee, prt, xyz, tee, *cas, x = 0;

	p11 = argsv[1], p22 = argsv[2];
	if (argsc != 3 || !is_digit(p11) || !is_digit(p22))
		errors();
	swt = _strlen(p11);
	rrr = _strlen(p22);
	lee = swt + rrr + 1;
	cas = malloc(sizeof(int) * lee);
	if (!cas)
		return (1);
	for (i = 0; i <= swt + rrr; i++)
		cas[i] = 0;
	for (swt = swt - 1; swt >= 0; swt--)
	{
		xyz = p11[swt] - '0';
		prt = 0;
		for (rrr = _strlen(p22) - 1; rrr >= 0; rrr--)
		{
			tee = p22[rrr] - '0';
			prt += cas[swt + rrr + 1] + (xyz * tee);
			cas[swt + rrr + 1] = prt % 10;
			prt /= 10;
		}
		if (prt > 0)
			cas[swt + rrr + 1] += prt;
	}
	for (i = 0; i < lee - 1; i++)
	{
		if (cas[i])
			x = 1;
		if (x)
			_putchar(cas[i] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(cas);
	return (0);
}
