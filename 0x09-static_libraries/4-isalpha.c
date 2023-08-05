#include "main.h"

/**
 * _isalpha - function to check alphabetic
 *
 * @c: check input of function
 *
 * Return: return 1 if c is a letter,return 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
