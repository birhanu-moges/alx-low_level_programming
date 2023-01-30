#include "lists.h"
/**
 * add_nodeint_end - add node at the end ot the list
 * @head: head of the list
 * @n: int value of the list
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *current;
	
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	current = *head;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	while (current->next)
		current = current->next;
	current->next = newNode;
	return (*head);
}
