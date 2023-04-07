# include "hash_tables.h"

/**
 * hash_table_create - creates hash table and returns pointer to it
 * @size:  array size of hash table
 *
 * Return: pointer to hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t ptr;

	prt = malloc(sizeof(hash_table_t));
	ptr->size = size;
	ptr->array = calloc(ptr->size, sizeof(hash_node_t));
	return (ptr)
}
