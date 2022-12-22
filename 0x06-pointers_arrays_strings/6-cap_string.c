#include "main.h"

/**
  * cap_string - change string to upper
  * @str: given String
  *
  * Return: uppercase string
  */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\n')
				str[i] = str[i] - ' ';
	i++;
	}
	return (str);
}
