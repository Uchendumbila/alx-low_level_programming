#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * interpolation_search - Writing a fxn that searches for a value in an
 * array of integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, down, up;
	double f;

	if (array == NULL)
		return (-1);

	down = 0;
	up = size - 1;

	while (size)
	{
		f = (double)(up - down) / (array[up] - array[down]) * (value - array[down]);
		pos = (size_t)(down + f);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			down = pos + 1;
		else
			up = pos - 1;

		if (down == up)
			break;
	}

	return (-1);
}
