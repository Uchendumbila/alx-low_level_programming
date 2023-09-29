#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - Writing a fxn that converts
 * a binary number to unsigned int
 * @b: The string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		num = 2 * num + (b[m] - '0');
	}

	return (num);
}
