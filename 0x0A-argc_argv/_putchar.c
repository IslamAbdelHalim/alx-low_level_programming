#include <unistd.h>

/**
 * _putchar - function to print character
 *
 * @c: the parameter
 *
 * Return: The value
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
