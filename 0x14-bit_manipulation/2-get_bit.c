#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - Writing a fxn that returns the value of a bit at a given index.
 * @n: The searching number
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_num;

	if (index > 63)
		return (-1);

	bit_num = (n >> index) & 1;

	return (bit_num);
}
