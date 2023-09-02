#include "main.h"

/**
 * _isupper - function to checks for uppercase
 *
 * @c: The character
 *
 * Return: return 1 if the charcter is uppercase and 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
