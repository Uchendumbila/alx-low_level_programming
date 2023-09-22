#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Writing a fxn that returns the number of elements
 * in a linked list_t list
 * @h: pointer to the list_t list
 *
 * Return: The number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
