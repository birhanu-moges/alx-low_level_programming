#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: total command line arguments
 * @argv: string arrays in command line
 *
 * Return: (0) on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv);
		argv += 1;
	}
	return (0);
}
