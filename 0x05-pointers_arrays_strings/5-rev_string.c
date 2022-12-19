#include "main.h"

/**
  * rev_string - reversing given string
  * @s: given string
  *
  * Return: void
  */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	char rev[i - 1];

	i--
	while (i >= 0)
	{
		s[i] = s[i];
		i--;
	}
	s = rev;

}
