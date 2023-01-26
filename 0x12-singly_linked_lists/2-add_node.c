#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add new node at the beginning of a list
 * @head: head pointer to list
 * @str: value to add to the list
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL || str == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
