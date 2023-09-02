#include "main.h"

/**
 * _islower - is function to check is character lower case
 *
 * @c: checks input of function
 *
 * Return: Always 1 if charachter is uppercase otherwise always 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
