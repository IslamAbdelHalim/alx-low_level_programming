#include "main.h"

/**
 * _pow_recursion - function to calc x power y
 *
 * @x: The base
 *
 * @y: The power
 *
 * Return: The x power y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
