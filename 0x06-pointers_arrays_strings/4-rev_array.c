#include "main.h"

/**
 * reverse_array - Writing a function that reverses an array of integers
 * @a: Array
 * @n: Number of elements of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
