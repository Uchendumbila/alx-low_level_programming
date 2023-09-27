#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Writing a fxn that adds a new node
 * at the beginning of a linked list
 * @head: The pointer to the first node in the list
 * @n: The data to insert in that new node
 *
 * Return: The pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *swt;

	swt = malloc(sizeof(listint_t));
	if (!swt)
		return (NULL);

	swt->n = n;
	swt->next = *head;
	*head = swt;

	return (swt);
}
