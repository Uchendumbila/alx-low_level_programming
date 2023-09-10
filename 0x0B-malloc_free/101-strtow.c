#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - Writing a fxn that counts the number of words in a string
 * @s: The evaluating str
 *
 * Return: The number of words
 */

int count_word(char *s)
{
	int cass, i, x;

	cass = 0;
	x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			cass = 0;
		else if (cass == 0)
		{
			cass = 1;
			x++;
		}
	}
	return (x);
}

/**
 * **strtow - Writing a fxn that splits a string into words.
 * @str: The splitting str
 *
 * Return: Pointer to a str array on success, NULL on anything else
 */

char **strtow(char *str)
{
	char **cass, *swt;
	int z, w = 0, x = 0, len, y = 0, prt, rrr;

	while (*(str + x))
		x++;
	len = count_word(str);
	if (len == 0)
		return (NULL);

	cass = (char **) malloc(sizeof(char *) * (len + 1));
	if (cass == NULL)
		return (NULL);

	for (z = 0; z <= x; z++)
	{
		if (str[z] == ' ' || str[z] == '\0')
		{
			if (y)
			{
				rrr = z;
				swt = (char *) malloc(sizeof(char) * (y + 1));
				if (swt == NULL)
					return (NULL);
				while (prt < rrr)
					*swt++ = str[prt++];
				*swt = '\0';
				cass[w] = swt - y;
				w++;
				y = 0;
			}
		}
		else if (y++ == 0)
			prt = z;
	}

	cass[w] = NULL;

	return (cass);
}
