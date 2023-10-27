#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - Writing a fxn that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i;
	char *w;

	i = 1;
	w = (char *)&i;
	return (*w);
}
