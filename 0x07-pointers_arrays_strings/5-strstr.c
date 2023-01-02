#include "main.h"

/**
  * _strstr - return muching string from source
  * @haystack: source string
  * @needle: characters to check
  * Return: return matching character starting
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (needle[j])
		{
			if (s[i] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i - j);
		j = 0;
	}
	return ('\0');
}
