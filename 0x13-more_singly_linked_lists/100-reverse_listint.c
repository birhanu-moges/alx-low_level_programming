#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: pointer to head of a list
 *
 * Return: return pointer to reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *tmp;

	if (!(*head))
		return (NULL);
	if (!(*head)->next)
		return (*head);

	current = *head;
	tmp  = NULL;
	while (current)
	{
		if (!tmp)
		{
			tmp = *head;
			current = current->next;
			tmp->next = NULL;
			*head = tmp;
		}
		tmp = current;
		current = current->next;
		tmp->next = *head;
		*head = tmp;
	}
	return (*head);
}
