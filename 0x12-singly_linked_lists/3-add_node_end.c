#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add new node at the end of a list
 * @head: head pointer to list
 * @str: value to add to the list
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *current;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->len = strlen(str);
	newNode->str = strdup(str);
	current = *head;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	while (current->next)
		current = current->next;

	current->next = newNode;
	newNode->next = NULL;
	return (newNode);
}
