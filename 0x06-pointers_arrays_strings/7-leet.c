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
	char letter[] = "aeotl";
	char decode[] = "43071";

	while (str[i])
	{
		while (letter[j])
		{
			if (str[i] == letter[j] || str[i] == letter[j] - ' ')
				str[i] == decode[j];
		}
		i++;
	}
	return (str);
}
