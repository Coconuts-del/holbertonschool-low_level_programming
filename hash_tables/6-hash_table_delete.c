#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht :    hash table to delete
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *next;
	unsigned long int i;

	if (ht == NULL)
		return;

/*  delete hash table */
	for (i = 0; i < ht->size; i++)
		for (tmp = ht->array[i]; tmp; tmp = next)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	free(ht->array);
	free(ht);
}
