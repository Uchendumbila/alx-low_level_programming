#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * rec_search - Writing a fxn that searches for a value in an array of
 * integers using the Binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t w;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (w = 0; w < size; w++)
		printf("%s %d", (w == 0) ? ":" : ",", array[w]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - Writing a fxn that calls to rec_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
