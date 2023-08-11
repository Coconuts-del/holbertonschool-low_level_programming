#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht :    hash table to look into
 * @key :   key used to retrive the value
 * Return: value associated with key(sucess) NULL(failed)
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];

/*  retrieve  VALUE ASSOCIATED WITH THE KEY */
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node  = node->next;
	}
	return (NULL);
}
