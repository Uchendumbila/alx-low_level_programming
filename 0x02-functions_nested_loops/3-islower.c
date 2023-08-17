#include "main.h"

/**
 * _islower - Checking for lowercase character
 * @c: character to be checked value
 * Return: 1 if true or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
