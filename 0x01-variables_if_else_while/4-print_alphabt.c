#include <stdio.h>
/**
 * main - Entry function for c program
 * Discription: print all letters
 * Return:  (0) sucess
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' || a != 'e')
		putchar(a);
	}
	putchar('\n');
	return (0);
}
