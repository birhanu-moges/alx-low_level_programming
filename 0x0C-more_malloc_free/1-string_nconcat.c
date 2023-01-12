#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: no of charaters to add two s1 from s2
 *
 * Return: return pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int l1 = 0, l2 = 0, index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	ptr = malloc(sizeof(char) * (l1 + l2) + 1);
	if (ptr == NULL)
		return (NULL);

	while (index < l1)
	{
		ptr[index] = s1[index];
		index++;
	while (index < l1 + l2)
	{
		ptr[index] = s2[index - l1];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
