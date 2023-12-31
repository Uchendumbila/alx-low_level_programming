#include "main.h"

/**
 * factorial - Writing a fxn that returns the fact of a number
 * @n: The number to return the factorial from
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
