#include "main.h"

/**
  * swap_int - Updates the value it points to 98
  * @a: pointer to a
  * @b: pointer to b
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int *tmp;

	*tmp = *a;
	*a = *b;
	*b = tmp;

}
