#include "main.h"

/**
  * factorial - checks the factorial of a number
  * @n: given number
  *
  * Return: (int ) factoral value
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
