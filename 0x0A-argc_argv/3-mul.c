#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: total command line arguments
 * @argv: numbers array
 *
 * Return: (result) on success
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", (a * b));
	return (0);
}
