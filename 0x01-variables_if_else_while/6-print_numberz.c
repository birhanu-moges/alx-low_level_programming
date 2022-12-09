#include <stdio.h>
/**
 * main - Entry function for c program
 * Discription: print all letters
 * Return:  (0) sucess
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar((a % 10) + '0');
	}
	putchar('\n');
	return (0);
}
