#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of the list
 * @head:  pointer to the head node
 * @n: int value of the node
 *
 * Return:  address of the new node or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
