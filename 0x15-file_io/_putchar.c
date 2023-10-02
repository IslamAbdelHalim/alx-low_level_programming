#include <unistd.h>

/**
 * _putchar - function to print char
 *
 * @c: char
 *
 * Return: char
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
