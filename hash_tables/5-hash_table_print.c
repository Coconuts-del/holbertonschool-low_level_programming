#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht :    hash table to print
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int aig = 0;

	if (ht == NULL)
		return;

/*  print  */
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (aig)
				printf(", ");
			printf("'%s' : '%s'", node->key, node->value);
			node  = node->next;
			if (!aig)
				aig = 1;
		}
	}
	printf("}\n");
}
