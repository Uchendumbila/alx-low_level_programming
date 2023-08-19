#include "main.h"
#include <stdio.h>

/**
 * print_number - Printing an integer
 * @n: The integer to print
 * Return: Nothing
 */

void print_number(int n)
{
	insigned int k = n;

	if (n < 0)
	{
	n *= -1;
	k = n;
	_putchar('_');
	}
	k /= 10;
	if (k != 0)
	print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}