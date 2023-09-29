#include "main.h"

/**
 * clear_bit - function to set a bit 0
 *
 * @n: The pointer to number
 *
 * @index: The index which clear a bit
 *
 * Return: 1 if sucess and -1 if fail
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= sizeof(n) * 8)
		return (-1);
	*n = (unsigned long int)*n & ~(1 << index);
	return (1);
}
