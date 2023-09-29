#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * flip_bits - Writing a fxn that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int w, count = 0;
	unsigned long int pawa;
	unsigned long int exclusive = n ^ m;

	for (w = 63; w >= 0; w--)
	{
		pawa = exclusive >> w;
		if (pawa & 1)
			count++;
	}

	return (count);
}
