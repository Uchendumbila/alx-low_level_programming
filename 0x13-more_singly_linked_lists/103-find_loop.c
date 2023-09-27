#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - Writing a fxn that finds the loop in a linked list
 * @head: The linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *bottom = head;
	listint_t *top = head;

	if (!head)
		return (NULL);

	while (bottom && top && top->next)
	{
		top = top->next->next;
		bottom = bottom->next;
		if (top == bottom)
		{
			bottom = head;
			while (bottom != top)
			{
				bottom = bottom->next;
				top = top->next;
			}
			return (top);
		}
	}

	return (NULL);
}
