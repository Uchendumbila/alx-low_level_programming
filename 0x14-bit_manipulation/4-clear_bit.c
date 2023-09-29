#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - Writing a fxn that sets the value of a bit to 0
 * at a given index.
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
