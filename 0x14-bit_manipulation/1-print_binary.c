#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - Writing a fxn that prints
 * the binary representation of a number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int m, count = 0;
	unsigned long int pawa;

	for (m = 63; m >= 0; m--)
	{
		pawa = n >> m;

		if (pawa & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
