#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Writing a fxn that adds a node at the end of a linked list
 * @head: The pointer to the first element in the list
 * @n: The data to insert in the new element
 *
 * Return: The pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *swt;
	listint_t *charr = *head;

	swt = malloc(sizeof(listint_t));
	if (!swt)
		return (NULL);

	swt->n = n;
	swt->next = NULL;

	if (*head == NULL)
	{
		*head = swt;
		return (swt);
	}

	while (charr->next)
		charr = charr->next;

	charr->next = swt;

	return (swt);
}
