#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - Writing a fxn that fills memory with a constatnt byte
 * @s: The memory area to be filled
 * @b: The character to be copied
 * @n: The number of times to copy b
 *
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - Writing a fxn that allocates memory for an array
 * @nmemb: The number of element(s) in the array
 * @size: The size of each element
 *
 * Return: Apointer to the memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *swt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	swt = malloc(size * nmemb);

	if (swt == NULL)
		return (NULL);

	_memset(swt, 0, nmemb * size);

	return (swt);
}
