#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - Writing a fxn that creates an array of integers
 * @min: The stored minimum range of values
 * @max: The stored maximum range of values
 *
 * Return: A pointer to the new array
 */

int *array_range(int min, int max)
{
	int *swt;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	swt = malloc(sizeof(int) * size);

	if (swt == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		swt[i] = min++;

	return (swt);
}
