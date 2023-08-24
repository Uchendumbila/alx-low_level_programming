#include "main.h"

/**
 * swap_int - writing a function that swaps the values of two integers.
 * @n1: integer to be swapped
 * @n2: integer to be swapped
 */

void swap_int(int *n1, int *n2)
{
	int m;

	m = *n1;
	*n1 = *n2;
	*n2 = m;
}
