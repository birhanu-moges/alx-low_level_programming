#include "lists.h"
#include <stdlib.h>

/**
 *   dd_node - add new node at the beginning of a list
 * @head: head pointer to list
 * @str: value to add to the list
 *
 * Return: address of the new element
 */

list_t **add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = str;
	temp->next = head;
	head = temp;
	return (head);
}
