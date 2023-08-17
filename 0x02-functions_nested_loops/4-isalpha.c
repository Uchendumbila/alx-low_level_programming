#include "main.h"

/**
 * _isalpha - Checkining for alphabetic characters
 * @c: Character to be checked value
 * Return: 1 if true or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
