#include "main.h"

/**
 * set_bit - function to set 1 at given index
 *
 * @n: The pointer to number
 *
 * @index: The place which we set 1
 *
 * Return: 1 if sucess and -1 if faild
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (!n || index >= sizeof(n) * 8)
		return (-1);
	*n = (unsigned long int)*n | mask;
	return (1);
}
