#include "main.h"

/**
 * print_array - Writing a function 
 * that prints n elements of an array of integers
 * followed by a new line.
 * @m: array name
 * @n: number of elements of the array to be printed
 * Return: m and n inputs
 */

void print_array(int *m, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", m[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", m[n - 1]);
		}
		printf("\n");
}
