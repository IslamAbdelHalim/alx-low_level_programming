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
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		int i, sum;

		sum = 0;

		for (i = 1; i < argc; i++)
		{
			int num;

			num = atoi(argv[i]);
			if (num == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += num;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
