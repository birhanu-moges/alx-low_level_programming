#include "main.h"

/**
  * leet - enodes string
  * @str: given String
  *
  * Return: encoded string
  */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char letters[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char decode[] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		while (letters[j])
		{
			if (str[i] == letters[j] || s[i] == letters[j] - ' ')
				str[i] == decode[j];
			j++;
		}
		i++;
	}
	return (str);
}
