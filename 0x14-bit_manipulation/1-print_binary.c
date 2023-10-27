#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _pow - writing a fxn that calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int swt;
	unsigned int i;

	swt = 1;
	for (i = 1; i <= power; i++)
		swt *= base;
	return (swt);
}

/**
 * print_binary - writing a fxn that prints the binary
 * representation of a number
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int longevity, flex;
	char charr;

	charr = 0;
	longevity = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (longevity != 0)
	{
		flex = n & longevity;
		if (flex == longevity)
		{
			charr = 1;
			_putchar('1');
		}
		else if (charr == 1 || longevity == 1)
		{
			_putchar('0');
		}
		longevity >>= 1;
	}
}
