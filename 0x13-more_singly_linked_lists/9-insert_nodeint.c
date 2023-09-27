#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Writing a fxn that inserts a new node
 * in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int w;
	listint_t *swt;
	listint_t *charr = *head;

	swt = malloc(sizeof(listint_t));
	if (!swt || !head)
		return (NULL);

	swt->n = n;
	swt->next = NULL;

	if (idx == 0)
	{
		swt->next = *head;
		*head = swt;
		return (swt);
	}

	for (w = 0; charr && w < idx; w++)
	{
		if (w == idx - 1)
		{
			swt->next = charr->next;
			charr->next = swt;
			return (swt);
		}
		else
			charr = charr->next;
	}

	return (NULL);
}
