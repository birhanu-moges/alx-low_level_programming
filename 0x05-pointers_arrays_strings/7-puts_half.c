#include "main.h"

/**
  * puts_half - prints seconf half of a string
  * @str: given string
  *
  * Return: void
  */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	if (i % == 0)
		i = i / 2;
	else
		i = (i + 1) / 2;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
