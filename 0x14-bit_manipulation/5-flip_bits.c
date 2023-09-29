#include "main.h"

/**
 * flip_bits - function that return number of bits
 *
 * @n: number you want to transfare to
 *
 * @m: number you want to transfar from
 *
 * Return: The number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numOfBits = 0;
	unsigned long int xo = n ^ m;

	while (xo)
	{
		if ((xo & 1l) == 1)
			numOfBits++;
		xo = xo >> 1;
	}
	return (numOfBits);
}
