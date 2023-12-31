#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Writing a fxn that frees a linked list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *charr;

	if (head == NULL)
		return;

	while (*head)
	{
		charr = (*head)->next;
		free(*head);
		*head = charr;
	}

	*head = NULL;
}
