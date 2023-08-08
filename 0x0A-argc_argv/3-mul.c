#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to print the name of program
 *
 * @argc: The counter of argument
 *
 * @argv: argument vector
 *
 * Return: 0 Always success
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc <= 1)
	{
		printf("Error\n");
	}
	else
	{
		int result;

		result = 1;

		for (i = 1; i < argc; i++)
		{
			int x;

			x = strtol(argv[i], NULL, 10);
			result *= x;
		}
		printf("%d\n", result);
	}
	return (0);
}
