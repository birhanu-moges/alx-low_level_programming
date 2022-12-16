#include <stdio.h>
/**
 * main - Entry point
 * Description: largest prime factor
 * Return: (0) success
 */

int main(void)
{
	int i;
	int j;
	int largestPrime = 1;
	int checkNumberIsprime = 0;

	for (i = 2; i <= 15; i++)
	{
		if (15 % i == 0)
		{
			for (j = 2; j <= i; j++)
			{
				if (i % j == 0)
				{
					checkNumberIsprime++;
				}
			}
		}
		if (checkNumberIsprime == 1)
		largestPrime = i;
		checkNumberIsprime = 0;
	}

	if (largestPrime > 1)
		printf("%d\n", largestPrime);
}
