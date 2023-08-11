#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht :   add or update the key/value of this hash table
 * @key :   key
 * @value :  value associated with the key
 * Return: 1(success) 0(failed)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, i;
	hash_node_t *newNode;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);

/*  MODIF VALUE ASSOCIATED WITH THE KEY */
	for (i = idx ; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}

/* add in beginning of the linked list */
	newNode = malloc(sizeof(hash_node_t *));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	return (1);
}
