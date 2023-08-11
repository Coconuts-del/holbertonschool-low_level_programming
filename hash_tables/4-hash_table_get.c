#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht :    hash table to look into
 * @key :   key used to retrive the value
 * Return: value associated with key(sucess) NULL(failed)
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);

/*  retrieve  VALUE ASSOCIATED WITH THE KEY */
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			return (ht->array[i]->value);
	}
	return (NULL);
}
