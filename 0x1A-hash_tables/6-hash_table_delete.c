#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 * Return: anything
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *del_node, *temp;
	unsigned long int i;

	i = 0;
	while (i < ht->size)
	{

		temp = ht->array[i];
		while (temp != NULL)
		{
			del_node = temp;
			temp = temp->next;
			free(del_node->key);
			free(del_node->value);
			free(del_node);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
