#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Writing a fxn that prints
 * all the elements of a listint_t list
 * @h: Printing linked list of type listint_t
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
		printf("%d\n", h->n);
		digit++;
		h = h->next;
	}

	return (digit);
}
