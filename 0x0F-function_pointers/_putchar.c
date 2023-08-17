#include <unistd.h>

/**
 * _putchar - function to print the character
 *
 * @c: The character
 *
 * Return: THe character
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
