#include "main.h"

/**
 * print_sign - function to print the sign a number
 *
 * @n: check the intput function
 *
 * Return: return 1 if the number greater than 0,
 * and return 0 if the n 0, and return -1 if n less than 1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
