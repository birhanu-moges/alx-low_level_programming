#include "main.h"

/**
  * rev_string - reversing given string
  * @s: given string
  *
  * Return: void
  */

void rev_string(char *s)
{
	int i = 0, j, k;
	char temp;

	while (s[i] != '\0')
		i++;

	i--;
	j = i;
	k = i / 2;
	i = 0;

	while (i <= k)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}

}
