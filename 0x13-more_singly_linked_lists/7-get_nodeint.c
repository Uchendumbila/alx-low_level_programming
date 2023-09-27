#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - Writing a fxn that returns the node
 * at a certain index in a linked list
 * @head: The first node in the linked list
 * @index: The index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int w = 0;
	listint_t *charr = head;

	while (charr && w < index)
	{
		charr = charr->next;
		w++;
	}

	return (charr ? charr : NULL);
}
