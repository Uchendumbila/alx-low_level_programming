#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_delete - Writing ba fxn that deletes a hash table
 * @ht: the hash table you want to delete
 *
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned long int p;
hash_node_t *node;

if (ht == NULL)
	return;

for (p = 0; p < ht->size; p++)
{
	node = ht->array[p];
	free_hash_list(node);
}
free(ht->array);
free(ht);
}


/**
 * free_hash_list - Writing a fxn that frees a hash_node_t list
 * @head: head of linked list
 *
 */

void free_hash_list(hash_node_t *head)
{
	hash_node_t *current;
	hash_node_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}
}
