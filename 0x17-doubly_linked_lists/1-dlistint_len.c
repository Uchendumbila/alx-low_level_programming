#include "lists.h"

/**
 * dlistint_len - Writing a fxn that count the number of nodes
 * in the linked list
 * @h: pointer to the beginning of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t w;

	for (w = 0; h != NULL; w++)
		h = h->next;
	return (w);
}i
