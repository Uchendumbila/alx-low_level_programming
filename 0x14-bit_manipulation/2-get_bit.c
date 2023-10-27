#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - Writing a fxn that returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int longevity, flex;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	longevity = 1 << index;
	flex = n & longevity;
	if (flex == longevity)
		return (1);
	return (0);
}
