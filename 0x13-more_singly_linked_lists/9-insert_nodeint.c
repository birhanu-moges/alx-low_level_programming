#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node with value n at given index
 * @head: list head
 * @idx: index to indert a node
 * @n: node value
 *
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode, *current, *pervious;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	current = *head;
	pervious = NULL;
	newNode->n = n;
	newNode->next = NULL;
	if (!(*head) && idx == 0)
	{
		*head = newNode;
		return (*head);
	}
	for (i = 0; current; i++)
	{
		if (i == idx)
		{
			if (!pervious)
			{
				newNode->next = *head;
				*head = newNode;
				return (*head);
			}
			pervious->next = newNode;
			newNode->next = current;
		}
		pervious = current;
		current = current->next;
	}
	return (NULL);
}
