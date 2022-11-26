#include "hash_tables.h"
/**
 *key_index-retrieves from index.
 *@ht:hash table
 *@value:value to be set
 *@key:key
 * Return:index.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	int hashindex;

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->key = key;
	newnode->value = value;
	newnode->next = NULL;
	hashindex = hash_djb2(key);
	while (ht && ht[hashindex] != -1)
	{
		hashindex++;
	}
	return (1);
}
