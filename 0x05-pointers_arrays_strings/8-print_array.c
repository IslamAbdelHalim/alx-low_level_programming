#include "main.h"
#include <stdio.h>

/**
 * print_array - function that print element of array
 *
 * @a: The array
 *
 * @n: number of ele
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if ( i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
