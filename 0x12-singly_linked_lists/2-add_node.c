#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Writing a fxn that adds a new node
 * at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL for anything else
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *rrr;
	unsigned int ptt = 0;

	while (str[ptt])
		ptt++;

	rrr = malloc(sizeof(list_t));
	if (!rrr)
		return (NULL);

	rrr->str = strdup(str);
	rrr->ptt = ptt;
	rrr->next = (*head);
	(*head) = rrr;

	return (*head);
}
