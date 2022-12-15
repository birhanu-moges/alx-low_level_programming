#include "main.h"
/**
 * _isupper - checkes uppercase 
 * Description: checkes character case
 * @c: input character
 * Return: (1) is uppercase 
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	
	return (0);
}
