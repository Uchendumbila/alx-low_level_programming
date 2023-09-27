#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Writing a fxn that deletes the head node of a linked list
 * @head: The  pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *charr;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	charr = (*head)->next;
	free(*head);
	*head = charr;

	return (num);
}
