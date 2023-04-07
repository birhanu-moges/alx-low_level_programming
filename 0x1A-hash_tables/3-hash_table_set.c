# include "hash_tables.h"
# include <string.h>

/**
 * node_create - creates a node element
 * @key:  key value
 * @value: value of a node
 *
 * Return: new Node on sucess or NULL if fails
 */
hash_node_t *node_create(const char *key, const char *value)
{
	hash_node_t *element;

	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (NULL);
	element->key = malloc(strlen(key) + 1);
	element->value = malloc(strlen(value) + 1);
	if (element->key == NULL || element->value == NULL)
		return (NULL);
	strcpy(element->key, key);
	strcpy(element->value, value);
	element->next = NULL;
	return (element);
}

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
	hash_node_t *newNode;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (0);
	newNode = node_create(key, value);
	if (!newNode)
		return (0);

	index = hash_djb2((unsigned char *)key) % (ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newNode;
		return (1);
	}
	else
	{
		hash_node_t *current = ht->array[index];

		while (current->next)
		{
			if (strcmp(current->key, key) == 0)
			{
				if (strcmp(current->value, value) == 0)
					return (1);
				free(current->value);
				current->value  = malloc(strlen(value) + 1);
				if ((current->value) == NULL)
					return (0);
				strcpy(current->value, value);
				return (1);
			}
			current = current->next;
		}
		newNode->next = ht->array[index];
		ht->array[index] = newNode;
		return (1);
	}
	return (0);
}
