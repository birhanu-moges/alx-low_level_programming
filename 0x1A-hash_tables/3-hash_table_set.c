# include "hash_tables.h"
# include <string.h>
/**
 * hash_table_set - adds an element to hash table
 * @ht:  hash table
 * @key: key value of an element
 * @value: element value
 *
 * Return: 1 on success or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element;
	unsigned long int index;

	if (strlen(key) == 0 || ht == NULL)
		return (0);
	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);
	element->key = malloc(strlen(key) + 1);
	if (element->key == NULL)
		return (0);
	element->value = malloc(strlen(value) + 1);
	if (element->value == NULL)
		return (0);
	strcpy(element->key, key);
	strcpy(element->value, value);
	element->next = NULL;

	index = hash_djb2((unsigned char *)key) % (ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = element;
		return (1);
	}
	else
	{
		hash_node_t *current = ht->array[index];

		while (current->next)
		{
			if (strcmp(current->key, key))
				return (0);
			current = current->next;
		}
		current->next = element;
		return (1);
	}
	return (0);
}
