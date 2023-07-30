#include "main.h"

/**
 * reverse_array - function that reverse the content of array
 *
 * @a: element of array
 *
 * @n: The number of element of array
*/

void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i--)
		_putchar(i);
	_putchar('\n');

}
