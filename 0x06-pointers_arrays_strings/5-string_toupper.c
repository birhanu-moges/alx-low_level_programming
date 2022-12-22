#include "main.h"

/**
  * string_toupper - change string to upper
  * @str: given String
  *
  * Return: uppercase string
  */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ' ';
	i++;
	}
	return (str);
}
