#include <stdio.h>
/**
 * main - largest prime facter of 612852475143.
 * Return: 0
 */
int main(void)
{
	long int i, j, k;

	k = -1;
	i = 612852475143;
	while (i % 2 == 0)
	{
		k = 2;
		i = i / 2;
	}
	for (j = 3; j <= i / 2; j = j + 2)
	{
		while (i % j == 0)
		{
			k = j;
			i = i / j;
		}
	}
	if (i > 2)
	{
		k = i;
	}
	printf("%ld\n", k);
	return (0);
}
