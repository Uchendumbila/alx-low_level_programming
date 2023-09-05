#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * str_concat - Writing a fxn that concatenates two strings.
 * @s1: string number one
 * @s2: string number two
 *
 * Return: Pointer to string on success.
 */

char *str_concat(char *s1, char *s2)
{
	char *swt;
	int i, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = x = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[x] != '\0')
		x++;
	swt = malloc(sizeof(char) * (i + x + 1));

	if (swt == NULL)
		return (NULL);
	i = x = 0;
	while (s1[i] != '\0')
	{
		swe[i] = s1[i];
		i++
	}

	while (s2[x] != '\0')
	{
		swt[i] = s2[x];
		i++, x++;
	}
	swt[i] = '\0';
	return (swt);
}
