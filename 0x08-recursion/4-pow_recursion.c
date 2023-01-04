#include "main.h"

/**
  * _pow_recursion - x power of y
  * @x: given number
  * @y: exponent
  *
  * Return: (int ) x power of y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(y - 1));
}
