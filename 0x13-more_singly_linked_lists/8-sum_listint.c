#include "lists.h"

/**
 * sum_listint - sum all the data values in a list
 * @head: list head
 *
 * Return: return sum
 */
int sum_listint(listint_t *head)
{
	int sum  = 0;
	listint_t *current = head;

	if (head == NULL)
		return (0);
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
