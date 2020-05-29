#include "hash_tables.h"
/**
 * key_index - function that get the index of a given key
 * @size: is the size of the hash table array
 * @key: element to look for
 * Return:  the index at which the key/value pair should be stored in the
 *          array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	return (hash_djb2(key) % size);
}
