#include "main.h"
#include <stdlib.h>

/**
 * create_array - Writing a program that creates an array of chars
 * and initializes it with a specific char.
 * @size: The array size
 * @c: The assigning character
 *
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
