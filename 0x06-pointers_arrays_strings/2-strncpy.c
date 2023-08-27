#include "main.h"

/**
 * _strncpy - Writing a function that copies a string
 * @dest: Input value
 * @src: Input value
 * @n: Input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = ;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++
	}
	return (dest);
}