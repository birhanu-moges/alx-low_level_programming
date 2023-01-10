#include "main.h"
#include <stdlib.h>

/**
 * strtow - string to word array conversion
 * @str: string value
 *
 * Return: point to string array(word)
 */

char **strtow(char *str)
{
	char **ptr;
	int i = 0, j = 0;

	if (str ==  NULL || str == "")
		return (NULL);
	while (str[j] != '\0')
	{
		if (str[0] == ' ')
		       continue;
		 if (str[j] != ' ')
		 {
			 while (str[j] != ' ' && str[j] != '\0')
			 {
				 *ptr[i] = str[j];
				 i++;
				 j++;
			 }
			 ptr[i] = '\0';
		 }
		 i = 0;
		 *ptr++;

	}
}

