#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry function
 * Discription: check first digit value
 * Return: (0) sucess
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int val = n;

	val = val % 10;
	if (val > 5)
	{
		printf("Last figit of %d is %d %s\n", n, val, "and is greater than 5");
	}
	else if (val < 6 && val != 0)
	{
		printf("Last figit of %d is %d %s\n", n, val, "and is zero");
	}
	else
	{
		printf("Last figit of %d is %d %s\n", n, val,
			      "and is less than 6 and not 0");
	}
	return (0);
}
