#include "main.h"

/**
  * _sqrt_recursion - finds square root of a number
  * @n: given number
  *
  *
  * Return: (int ) squre root value of given number
  */
int _sqrt_recursion(int n)
{
	int root = 1;

	if (n < 0 || n < root)
		return (-1);
	if (root * root == n)
		return (root);
	root++;
	 _sqrt_recursion(n);
}
