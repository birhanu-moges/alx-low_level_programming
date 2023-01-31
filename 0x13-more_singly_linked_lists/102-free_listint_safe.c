#include "lists.h"

/**
 * free_listint_safe - fre lists with loop
 * @h: head pointer to list
 *
 * Return: return the size of a list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *sp, *fp, *tmp;
	unsigned int flag = 0, index = 0;

	if (*h == NULL)
		return (0);
	sp = fp = tmp = *h;
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
		sp->next = NULL;
	}
	tmp = tmp->next;
	while (tmp)
	{
		index++;
		tmp = tmp->next;
	}

	return (index);
}
