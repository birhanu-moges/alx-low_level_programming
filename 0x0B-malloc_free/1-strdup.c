#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocaated space in memory
 * @str: string to be sotred in new memory
 *
 * Return: pointer to dublicated string
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *ptr = 0;

	if (str == "" || str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	i++;
	ptr = malloc(sizeof(char) * i);
	while (j < i)
	{
		if (ptr == NULL)
			return (NULL);
		prt[j] = str[j];
		j++;
	}
	return (ptr);
}
