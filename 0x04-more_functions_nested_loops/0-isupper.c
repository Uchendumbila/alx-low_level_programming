#include "main.h"

/**
 * _isupper - Checking for uppercase letter
 * @x: Letter to be checked
 * Return: 1 for uppercase letter or 0 for anything else
 */

int _isupper(int x)
{

	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	return (0);
}
