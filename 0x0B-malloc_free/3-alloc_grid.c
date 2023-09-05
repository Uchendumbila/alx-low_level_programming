#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Writing a fxn that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: assigned width
 * @height: assigned height
 *
 * Return: Pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **rrr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	rrr = malloc(sizeof(int *) * height);

	if (rrr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		rrr[i] = malloc(sizeof(int) * width);
		if (rrr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(rrr[i]);

			free(rrr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			rrr[i][j] = 0;
	}

	return (rrr);
}
