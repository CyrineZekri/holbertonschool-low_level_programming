#include "hash_tables.h"
/**
 *hash_table_create-creates hash table
 *@size:size of the hash tables.
 * Return: table created.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;

	hashtable = malloc(size * sizeof(hash_table_t));
	if (hashtable == NULL)
	{
		return (NULL);
	}
	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t) * size);
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	return (hashtable);
}
