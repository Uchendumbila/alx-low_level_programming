#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Writing a fxn that executes a fxn
 * given as a param on each element of an array.
 * @array: The array
 * @size: The elements to print
 * @action: The printing pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int w;

	if (array == NULL || action == NULL)
		return;

	for (w = 0; w < size; w++)
	{
		action(array[w]);
	}
}
