#include "main.h"

/**
 * error - function to print error
*/
void error(void)
{
	char str[] = "Error";
	int i;

	for (i = 0; i < 5; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
/**
 * _atoi - function to convert string to integer
 *
 * @s: The array of char (string)
 *
 * Return: The number
*/
int _atoi(char *s)
{
	int i, num = 0;
	int sign = 1;

	while (*s < 48 || *s > 57)
	{
		error();
		exit(98);
	}
	for (i  = 0; s[i] >= 48 && s[i] <= 57; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		num = (num * 10) + (s[i] - '0');
	}
	return (num * sign);
}
/**
 * print_number - function to print number
 *
 * @i: The number
*/
void print_number(int i)
{
	if ((i / 10) > 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
/**
 * main - Entry point
 *
 * @argc: The number of argument
 *
 * @argv: The argument
 *
 * Return: Always 0 means sucess
*/
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		error();
		exit(98);
	}
	print_number(_atoi(argv[1]) * _atoi(argv[2]));

	_putchar('\n');
	return (0);
}
