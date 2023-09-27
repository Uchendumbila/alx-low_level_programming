#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint -  Writing a fxn that calculates the sum
 * of all the data in a listint_t list
 * @head: The first node in the linked list
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *charr = head;

	while (charr)
	{
		sum += charr->n;
		charr = charr->next;
	}

	return (sum);
}
