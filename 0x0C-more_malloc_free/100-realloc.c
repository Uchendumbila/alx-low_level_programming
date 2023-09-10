#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p11;
	char *p22;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p11 = malloc(new_size);
	if (!p11)
		return (NULL);

	p22 = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p11[i] = p22[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p11[i] = p22[i];
	}

	free(ptr);
	return (p11);
}
