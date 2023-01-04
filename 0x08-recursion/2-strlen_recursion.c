#include "main.h"

/**
  * _strlen_recursion - count string length
  * @s: string to count
  *
  * Return: (int ) length of string
  */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (length);
	}
	length++;
	_strlen_recursion(s + 1);
}
