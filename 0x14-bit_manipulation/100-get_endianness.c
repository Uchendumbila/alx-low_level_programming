#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_endianness - Writing a fxn that checks the endianness.
 *
 * Return: 0 for big, 1 for small
 */

int get_endinness(void)
{
	unsigned int w = 1;
	char *c = (char *) &w;

	return (*c);
}
