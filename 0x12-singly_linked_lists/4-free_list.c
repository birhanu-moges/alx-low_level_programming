#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free memory used by linked lis
 * @head: head pointer to list
 *
 *
 * Return: void
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
