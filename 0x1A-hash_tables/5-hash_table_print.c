#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Writing a fxn that prints hashtable
 * @ht: the hash table you want to print
 *
 */

void hash_table_print(const hash_table_t *ht)
{

unsigned long int p;
hash_node_t *node;
short int comma = 0;

if (ht == NULL)
	return;

putchar('{');
for (p = 0; p < ht->size; p++)
{
	node = ht->array[p];
	while (node != NULL)
	{
		if (comma)
			printf(", ");

		printf("'%s': '%s'", node->key, node->value);
		node = node->next;

		if (comma == 0)
			comma = 1;
	}
}
printf("}\n");
}
