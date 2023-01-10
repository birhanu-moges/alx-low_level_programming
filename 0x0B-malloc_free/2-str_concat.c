#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: concatenated String pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int l1 = 0, l2 = 0, index = 0;
	char *ptr;

	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = malloc(sizeof(char) * (l1 + l2 + 1));
	if (ptr == NULL)
		return (NULL);
	while (index < l1)
	{
		ptr[index] = s1[index];
		index++;
	}
	while (index < (l1 + l2))
	{
		ptr[index] = s2[index - l1];
		index++;
	}
	ptr[index] = '\0';

	return (ptr);
}
