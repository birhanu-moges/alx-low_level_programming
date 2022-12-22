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
	char letter[5] = {'a', 'e', 'o', 't', 'l'};
	char decode[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letters[j] || s[i] == letters[j] - ' ')
				str[i] == decode[j];
		}
		i++;
	}
	return (str);
}
