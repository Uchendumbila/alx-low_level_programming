#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_endianness - Writing a fxn that checks if a machine
 * is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
