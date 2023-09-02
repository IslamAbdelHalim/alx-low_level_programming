#include "main.h"
#include <stdio.h>

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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
