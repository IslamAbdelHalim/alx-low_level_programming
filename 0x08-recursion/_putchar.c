#include <unistd.h>

/**
 * _putchar - function that print a char
 *
 * @c: The char argument
 *
 * Return: The result
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
