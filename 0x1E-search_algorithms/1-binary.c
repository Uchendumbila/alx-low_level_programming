#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * recursive_search - Writing a fxn that  searches for a value in an array of
 * integers using the Binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t m;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (m = 0; m < size; m++)
		printf("%s %d", (m == 0) ? ":" : ",", array[m]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - Writing a fxn that calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
