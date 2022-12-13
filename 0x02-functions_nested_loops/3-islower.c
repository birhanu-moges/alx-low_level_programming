#include "main.h"
/**
 * _islower - entry point
 * Discription: check is lower letter
 * Return: (0) success
 */

int _islower(int c)
{
	if (97 < = c && c <= 122)
		return (1);
	else 
		return (0);
}
