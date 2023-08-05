#include "main.h"

/**
 * _strlen_recursion - function that returns the length of string
 *
 * @s: Array of character
*/

int _strlen_recursion(char *s)
{
	return (_strlen_recursion(s + 1) + 48);
}
