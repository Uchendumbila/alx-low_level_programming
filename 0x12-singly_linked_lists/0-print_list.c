#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Writing a fxn that prints all the elements
 * of a list_t list
 * @h: The pointer to print
 *
 * Return: Number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t w = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		w++;
	}

	return (w);
}
