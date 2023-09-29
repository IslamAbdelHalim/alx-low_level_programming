#include "main.h"

/**
 * get_endianness - function to know the type of endianness
 *
 * Return: 1 if it little-endian and 0 if big endian
*/

int get_endianness(void)
{
	unsigned int i = 1;

	char *c = (char *)&i;

	if (*c == 1)
		return (1);

	return (0);
}
