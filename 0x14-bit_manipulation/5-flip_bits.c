#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - Writing a fxn that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, feel = 0;
	unsigned long int longevity;
	unsigned long int flex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		longevity = flex >> i;
		if (longevity & 1)
			feel++;
	}

	return (feel);
}
