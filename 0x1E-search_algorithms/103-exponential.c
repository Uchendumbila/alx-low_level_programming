#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * recursive_search - Writing a fxn that searches for a value in an array of
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

/**
 * exponential_search - Writing a fxn that searches for a value in an array of
 * integers using the Exponential search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t index, next;
	int result;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	index = 1;

	while (array[index] < value && index < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)index, array[index]);
		index *= 2;
	}

	next = (index >= size) ? (size - 1) : index;

	index /= 2;

	printf("Value found between indexes [%d] and [%d]\n", (int)index, (int)next);

	result = binary_search(array + index, (next + 1) - index, value);

	if (result >= 0)
		result += index;

	return (result);
}
