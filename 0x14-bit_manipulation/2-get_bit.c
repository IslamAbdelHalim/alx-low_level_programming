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
	/*chech if no n or index more than the size of n*/
	if (!n || sizeof(n) * 8 <= index)
		return (-1);
	return (n >> index & 1);
}
