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
	if (argc != 2)
	{
		printf("Error\n");
		return (-1);
	}
	printf("%d\n", (atoi(*argv) * atoi((*(argv + 1))));
	return (0);
}
