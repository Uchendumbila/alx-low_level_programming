#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Writing a fxn that concatenates all the arguments of my program.
 * @ac: Input
 * @av: pointer array
 *
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	int i, x, y = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][x]; x++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
		{
			str[y] = av[i][x];
			y++;
		}
		if (str[y] == '\0')
		{
			str[y++] = '\n';
		}
	}
	return (str);
}
