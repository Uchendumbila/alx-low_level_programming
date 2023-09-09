#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Writing a fxn that allocates memory using malloc
 * @b: The number of byte(s) to be allocated
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *swt;

	swt = malloc(b);

	if (swt == NULL)
		exit(98);

	return (swt);
}
