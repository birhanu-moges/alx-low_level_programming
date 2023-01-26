#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add new nodes to the list
  * @head: current place in the list
  * @str: int to add to the list
  * Return: pointer to current position in list
  */
list_t *add_nodeint(list_t **head, const char str)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = str;
	new->next = *head;
	*head = new;
	return (*head);
}
