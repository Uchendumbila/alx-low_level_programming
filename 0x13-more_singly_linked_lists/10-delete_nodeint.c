#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Writing a fxn that deletes a node
 * in a linked list at a certain index
 * @head: The pointer to the first element in the list
 * @index: The index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *charr = *head;
	listint_t *current = NULL;
	unsigned int w = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(charr);
		return (1);
	}

	while (w < index - 1)
	{
		if (!charr || !(charr->next))
			return (-1);
		charr = charr->next;
		w++;
	}


	current = charr->next;
	charr->next = current->next;
	free(current);

	return (1);
}
