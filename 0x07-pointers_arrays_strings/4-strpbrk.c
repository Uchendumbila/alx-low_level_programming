#include "main.h"

/**
 * _strpbrk - Writing a fxn that searches a string for any set of bytes
 * @s: Input
 * @accept: Input
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
