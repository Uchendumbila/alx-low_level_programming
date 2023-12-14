#include "main.h"

/**
 * _strchr - Writing a fxn that locates a character in a string
 * @s: Input
 * @c: Input
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
