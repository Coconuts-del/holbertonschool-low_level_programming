#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 *@size : size of the array
 * Return: pointer to the newly created hash table(success) null(failed)
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *Htable = NULL;
	unsigned int i;

	if (size < 1)
		return (NULL);

	Htable = malloc(sizeof(hash_table_t));
	if (Htable == NULL)
		return (NULL);

	Htable->size = size;
	Htable->array = malloc(sizeof(hash_node_t *) * size);
	if (Htable->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		Htable->array[i] = NULL;
	}
	return (Htable);
}
