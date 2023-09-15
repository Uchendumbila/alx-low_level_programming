#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Writing a fxn that searches for an integer.
 * @array: The array
 * @size: The size of the elems in array
 * @cmp: The pointer fxn
 *
 * Return: Always 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int w;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (w = 0; w < size; w++)
	{
		if (cmp(array[w]))
			return (w);
	}
	return (-1);
}
