#include <stdio.h>
/**
 * main - Entry point
 * Description: largest prime factor
 * Return: (0) success
 */

int main(void)
{
	long int i;
	long int j;
	long int largestPrime = 1;
	long int checkNumberIsprime = 0;

	for (i = 2; i <= 612852475143; i++)
	{
		if (612852475143 % i == 0)
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
		printf("%ld\n", largestPrime);
}
