#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head pointer to list
 *
 * Return: node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sp, *fp, *tmp;
	unsigned int flag = 0;

	if (head == NULL)
		return (NULL);
	sp = fp = tmp = head;
	while (sp && fp && fp->next)
	{
		sp = sp->next;
		fp = sp->next->next;
		if (sp == fp)
		{
			flag = 1;
			break;
		}
	}

	if (flag)
	{
		while (tmp->next != sp->next)
		{
			tmp = tmp->next;
			sp = sp->next;
		}
		return (tmp->next);
	}
	return (NULL);
}
