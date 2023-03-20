#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add a new node at the end of a lis
 * @head: head of a list
 * @n: new element value
 *
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *current;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = newNode;
	newNode->prev = current;
	return (newNode);
}
