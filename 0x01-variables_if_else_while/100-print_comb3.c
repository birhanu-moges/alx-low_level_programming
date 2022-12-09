#include <stdio.h>
/**
 * main - Entry function for c program
 * Discription: print all letters
 * Return:  (0) sucess
 */
int main(void)
{
	int a;
	int i;

	for (a = 0; a <= 9; a++)
	{
		for (i = a + 1; i <= 9; i++)
		{
			putchar((a % 10) + '0');
			putchar((i % 10) + '0');
			if ((a * 10 + i) < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
