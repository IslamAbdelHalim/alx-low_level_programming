#include "main.h"

/**
 * print_last_digit - function to print the last digit
 *
 * @c: check input and output
 *
 * Return: the value of the last digit
*/

int print_last_digit(int c)
{
	int digit;

	if (c < 0)
		digit = (c % 10) * -1;
	else
		digit = (c % 10);

	return (digit);

}
