#include "main.h"

/**
  * _puts_recursion - recursive printing strings
  * @s: string to print
  * 
  * Return: void
  */
void _puts_recursion(char *s)
{
	if (s == '\0')
		return;
	_putchar(s);
	_puts_recursion(s++);
}
