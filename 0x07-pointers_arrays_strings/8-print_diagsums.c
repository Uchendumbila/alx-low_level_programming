#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Writing a fxn that prints the sum of the diagonals
 * of a square matrix of integers.
 * @a: Input
 * @size: Input
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int sumx, sumy, z;

	sumx = 0;
	sumy = 0;

	for (z = 0; z < size; z++)
	{
		sumx = sumx + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
		sumy += a[z * size + (size - z - 1)];
	}
	printf("%d, %d\n", sumx, sumy);
}
