#include "lists.h"

/**
 * pop_listint - removes and returns head node of a list
 * @head: head of a list
 *
 * Return: head node int value or 0 on failure
 */

int pop_listint(listint_t **head)
{
	int headValue = 0;
	listint_t *tmp, *current;

	if (head == NULL)
		return (0);
	current = *head;
	tmp = *head;
	if (*head)
	{
		headValue = current->n;
		*head = current->next;
		free(tmp);
	}
	return (headValue);
}
