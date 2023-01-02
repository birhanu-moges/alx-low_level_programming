#include "main.h"

/**
  * _strchr - find first occurance of a character
  * @s: source string
  * @c: character to check
  * Return: return pointer to the first occurance
  */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
