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

	for (a = 0; a <= 99; a++)
	{
		for (i = a + 1; i <= 99; i++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			if ((a != 98 &&  i != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
