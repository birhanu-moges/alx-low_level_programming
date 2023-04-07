# include "hash_tables.h"

/**
 * key_index - fuction which returns the index of a key
 * @key:  key to be mappled to index
 * @size: array size of the hash table
 *
 * Return: index value of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
