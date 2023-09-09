#include "main.h"

/**
 * squar - function to know the squar
 *
 * @n: The number
 *
 * @y: 1
 *
 * Return: square
*/

int squar(int n, int y)
{
	if (y * y == n)
		return (y);
	else if (y * y < n)
		return (squar(n, y + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - function to return the squar root
 *
 * @n: The number
 *
 * Return: The squat root
*/

int _sqrt_recursion(int n)
{
	return (squar(n, 1));
}
