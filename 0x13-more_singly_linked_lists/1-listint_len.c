#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - Writing a fxn that returns the number
 * of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
		digit++;
		h = h->next;
	}

	return (digit);
}
