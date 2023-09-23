#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Writing a fxn that adds a new node
 * at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptt;
	list_t *charr = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	ptt = malloc(sizeof(list_t));
	if (!ptt)
		return (NULL);

	ptt->str = strdup(str);
	ptt->len = len;
	ptt->next = NULL;

	if (*head == NULL)
	{
		*head = ptt;
		return (ptt);
	}

	while (charr->next)
		charr = charr->next;

	charr->next = ptt;

	return (ptt);
}
