#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - Writing a fxn that frees a list_t list
 * @head: list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *charr;

	while (head)
	{
		charr = head->next;
		free(head->str);
		free(head);
		head = charr;
	}
}
