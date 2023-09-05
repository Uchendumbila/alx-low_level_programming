#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Writing a function that returns a pointer
 * to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: assigned char
 *
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *swt;
	int i, x = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	swt = malloc(sizeof(char) * (i + 1));

	if (swt == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		swt[x] = str[x];
	return (swt);
