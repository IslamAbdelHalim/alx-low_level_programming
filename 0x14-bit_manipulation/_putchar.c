#include "unistd.h"

/**
 * _putchar - function print char
 *
 * @s: char
 *
 * Return: char
*/

int _putchar(char s)
{
	return (write(1, &s, 1));
}
