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

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1, num2;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	return (0);
}
