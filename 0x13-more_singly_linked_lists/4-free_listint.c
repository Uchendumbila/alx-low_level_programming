#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - Writing a fxn that frees a linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *charr;

	while (head)
	{
		charr = head->next;
		free(head);
		head = charr;
	}
}

