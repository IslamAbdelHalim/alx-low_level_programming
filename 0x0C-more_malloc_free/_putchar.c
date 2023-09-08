#include <unistd.h>

/**
 * _putchar - function to print char
 *
 * @c: The character
 *
 * Return: The character
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
