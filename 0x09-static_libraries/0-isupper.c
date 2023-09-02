#include "main.h"

/**
 * _isupper - Writing a fxn that will be checking for uppercase letter
 * @x: Checking letter
 * Return: 1 for uppercase or zero for anything else.
 */

int _isupper(int x)
{

	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	return (0);
}
