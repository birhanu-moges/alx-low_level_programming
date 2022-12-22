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
	char letters[] = "aeotl";
	char decode[] = "43071";

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
