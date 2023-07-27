#include "main.h"

/**
 * swap_int - fuction to swap the value of two integers
 *
 * @a: The first input pointer
 *
 * @b: The Second input pointer
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
