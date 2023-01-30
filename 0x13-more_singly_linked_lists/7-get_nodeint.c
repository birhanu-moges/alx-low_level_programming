#include "lists.h"

/**
 * get_nodeint_at_index - gets node element at given index
 * @head: head of list
 * @index: element index
 *
 * Return: return node at index or NULL if index is less or grater
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int listSize;
	listint_t *current = head;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (listSize = 0; current; listSize++)
	{
		if (listSize == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}
