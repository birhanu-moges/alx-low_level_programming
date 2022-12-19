#include "main.h"

/**
  * puts_half - prints seconf half of a string
  * @str: given string
  *
  * Return: void
  */

void puts_half(char *str)
{
	int i = 0, j;

	while (str[i])
		i++;
	i--;
	j = i / 2;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');

}
