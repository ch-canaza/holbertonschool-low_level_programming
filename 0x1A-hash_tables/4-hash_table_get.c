#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value asociated
 *                  with a key in the hash table
 * @ht: pointer to the hash table
 * @key: key with bthe value to get to
 * Return: the value asociated with the element
 *         NULL if could not be found
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);

}
