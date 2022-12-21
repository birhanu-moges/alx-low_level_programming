#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: destination String
  * @src: source String
  * Return: concatinated String
  */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int src_length = 0;

	while (dest[dest_length] != '\0')
		dest_length++;
	while (src[src_length] != '\0')
		src_length++;
	src_length--;
	int start_index = 0;

	while (start_index <= src_length)
	{
		dest[dest_length++] = src[i];
		i++;
	}
	return (dest);
}
