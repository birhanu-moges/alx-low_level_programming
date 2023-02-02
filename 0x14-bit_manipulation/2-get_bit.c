#include "main.h"
/**
 * get_bit - get value of a bit at a given index
 * @n: given number
 * @index: given index
 *
 * Return: bit at given index or -1 of error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitAtIndex;
	
	bitAtIndex = (n >> index) & 1;

	if ((bitAtIndex == 1) || (bitAtIndex == 0))
		return (bitAtIndex);
	else
		return (-1);
}
