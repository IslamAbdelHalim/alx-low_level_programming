#include "main.h"

/**
 * _isdigit - function to checks for uppercase
 *
 * @c: The character
 *
 * Return: return 1 if the charcter is uppercase and 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
