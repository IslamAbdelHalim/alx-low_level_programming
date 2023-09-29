#include "main.h"

/**
 * get_bit - function to git the bit
 *
 * @n: The number
 *
 * @index: The index of wanted bit
 *
 * Return: The bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (!n)
		return (-1);
	return (n >> index & 1);
}
