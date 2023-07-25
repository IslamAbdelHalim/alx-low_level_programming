#include "main.h"

/**
 * _abs - function to absolute the number
 *
 * @int: The paramter of function
 *
 * Return: The absolute of number
*/

int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	return (c);
}
