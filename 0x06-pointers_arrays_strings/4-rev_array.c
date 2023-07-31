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
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}

}
