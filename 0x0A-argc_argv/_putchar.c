#include <unistd.h>

/**
 * _putchar - function to print char
 *
 * @s: The argument
 *
 * Return: The char
*/

int _putchar(char s)
{
	return (write(1, &s, 1));
}
